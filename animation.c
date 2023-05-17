/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:33:21 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/17 17:44:23 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	animation(t_game *game)
{
	if (game->map.loop < 3600)
	{
		game->map.loop++;
		return (0);
	}
	game->map.loop = 0;
	if (game->map.frame == 1)
		game->image.c = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
				"./images/collectable.xpm", &game->graphics.size_tile,
				&game->graphics.size_tile);
	else
	{
		game->image.c = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
				"./images/collectable2.xpm", &game->graphics.size_tile,
				&game->graphics.size_tile);
			game->map.frame = 0;
	}
	scan_map(game);
	game->map.frame++;
	return (0);
}
