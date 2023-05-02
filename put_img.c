/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:40:22 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/02 17:24:04 by ecaruso          ###   ########.fr       */
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