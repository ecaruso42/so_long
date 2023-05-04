/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:19:43 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/04 18:20:15 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_C_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window, game->image.C, x * 64, (y + 1) *64);
}