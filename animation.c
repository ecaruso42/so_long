/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:33:21 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/16 17:01:53 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	animation(t_game *game)
{
	int	loop;
	int	count;

	count = 0;
	loop = 0;
	while (loop < 2000)
		loop++;
	if (loop == 2000)
		count++;
	mlx_destroy_image(game->graphics.mlx_pointer, game->image.c);
	if (count == 1)
	{
		game->image.c = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
		"./images/collectable.xpm", &game->graphics.size_tile,
		&game->graphics.size_tile);
	}
	else if (count == 2)
	{
		game->image.c = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
		"./images/collectable2.xpm", &game->graphics.size_tile,
		&game->graphics.size_tile);
	}
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.mlx_window);
	scan_map(game);
	count = 0;
	return (0);
}
