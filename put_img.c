/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:40:22 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/08 16:43:02 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_wall_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.wall, x * 64, (y + 1) * 64);
}

void	put_ground_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.ground, x * 64, (y + 1) * 64);
}

void	put_player_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.P, x * 64, (y + 1) * 64);
	game->pcoords.x = x;
	game->pcoords.y = y;
}

void	put_enemy_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.N, x * 64, (y + 1) *64);
}

void	put_exit_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.E, x * 64, (y + 1) *64);
}