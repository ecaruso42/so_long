/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_graphics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:38:29 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/09 16:03:56 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_window(t_game *game)
{
	game->graphics.mlx_pointer = mlx_init();
	game->graphics.mlx_window = mlx_new_window(game->graphics.mlx_pointer,
			(64 * game->map.map_width), (64 * game->map.map_height) + 64,
			"Cosí_lungo");
}

static void	inizialize_tiles_part_one(t_game *game)
{
	game->image.ground = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/ground.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.wall = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/wall.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.e = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/exit.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
}

static void	inizialize_tiles_part_two(t_game *game)
{
	game->image.p = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/P_look_R.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.n = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/N_look_L.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.c = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/collectable.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
}

void	make_graphics(t_game *game)
{
	inizialize_tiles_part_one(game);
	inizialize_tiles_part_two(game);
}
