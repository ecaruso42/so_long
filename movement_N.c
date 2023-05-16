/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_N.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:18:02 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/16 15:50:36 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_N_up(t_game *game, int y, int x)
{
	if (game->map.array_copy[y - 1][x] == '0')
	{
		game->map.array_copy[y - 1][x] = 'N';
		game->map.array_copy[y][x] = '0';
	}
	else if (game->map.array_copy[y - 1][x] == 'P')
		death(game);
}

void	move_N_down(t_game *game, int y, int x)
{
	if (game->map.array_copy[y + 1][x] == '0')
	{
		game->map.array_copy[y + 1][x] = 'N';
		game->map.array_copy[y][x] = '0';
	}
	else if (game->map.array_copy[y + 1][x] == 'P')
		death(game);
}

void	enemy_movement(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map.map_array[y])
	{
		x = 0;
		while (game->map.map_array[y][x])
		{
			if (game->map.map_array[y][x] == 'N')
			{
				if (y > game->pcoords.y)
					move_N_up(game, y, x);
				if (y < game->pcoords.y)
					move_N_down(game, y, x);
			}
			x++;
		}
		y++;
	}
	game->map.map_array = game->map.array_copy;
}
