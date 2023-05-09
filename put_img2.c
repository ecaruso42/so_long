/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:19:43 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/09 16:02:04 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_c_img(t_game *game, int y, int x)
{
	mlx_put_image_to_window (game->graphics.mlx_pointer,
		game->graphics.mlx_window, game->image.c, x * 64, (y + 1) * 64);
}
