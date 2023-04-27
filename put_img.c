/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:40:22 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/27 19:49:58 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_wall_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.wall, y * 128, (x + 1) * 128);
}

void	put_ground_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.ground, y * 128, (x + 1) * 128);
}