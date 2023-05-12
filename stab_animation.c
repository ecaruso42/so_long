/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stab_animation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:36:08 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/12 19:37:40 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <unistd.h>
#include <time.h>
#include <stdio.h>


void	stab(t_game *game)
{
	if (game->map.dir == 3)
		stab_r(game);
	if (game->map.dir == 4)
		stab_l(game);
	if (game->map.dir == 2)
		stab_d(game);
	if (game->map.dir == 1)
		stab_u(game);
}

void	stab_r(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.mlx_window);
	game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
			"./images/stab_r.xpm", &game->map.map_width,
			&game->map.map_height);
	put_player_img(game, game->pcoords.y, game->pcoords.x);
	if (game->map.map_array[game->pcoords.y][game->pcoords.x + 1] == 'N')
		game->map.map_array[game->pcoords.y][game->pcoords.x + 1] = 'D';
	scan_map(game);
}
void	stab_l(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.mlx_window);
	game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
		"./images/stab_l.xpm", &game->map.map_width,
		&game->map.map_height);
	put_player_img(game, game->pcoords.y, game->pcoords.x);
	if (game->map.map_array[game->pcoords.y][game->pcoords.x - 1] == 'N')
		game->map.map_array[game->pcoords.y][game->pcoords.x - 1] = 'D';
	scan_map(game);
}
void	stab_d(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.mlx_window);
	game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
		"./images/stab_d.xpm", &game->map.map_width,
		&game->map.map_height);
	put_player_img(game, game->pcoords.y, game->pcoords.x);
	if (game->map.map_array[game->pcoords.y + 1][game->pcoords.x] == 'N')
		game->map.map_array[game->pcoords.y + 1][game->pcoords.x] = 'D';
	scan_map(game);
}
void	stab_u(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.mlx_window);
	game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
		"./images/stab_u.xpm", &game->map.map_width,
		&game->map.map_height);
	put_player_img(game, game->pcoords.y, game->pcoords.x);
	if (game->map.map_array[game->pcoords.y - 1][game->pcoords.x] == 'N')
		game->map.map_array[game->pcoords.y - 1][game->pcoords.x] = 'D';
	scan_map(game);
}
