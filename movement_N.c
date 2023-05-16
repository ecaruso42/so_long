/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_N.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:18:02 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/16 20:00:18 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_N_up(t_game *game, int y, int x)
{
	if (game->map.map_array[y - 1][x] == '0')
	{
		game->map.map_array[y - 1][x] = 'N';
		game->map.map_array[y][x] = '0';
	}
	else if (game->map.map_array[y - 1][x] == 'P')
		death(game);
}

void	move_N_down(t_game *game, int y, int x)
{
	if (game->map.map_array[y + 1][x] == '0')
	{
		game->map.map_array[y + 1][x] = 'N';
		game->map.map_array[y][x] = '0';
	}
	else if (game->map.map_array[y + 1][x] == 'P')
		death(game);
}

void	move_N_left(t_game *game, int y, int x)
{
	if (game->map.map_array[y][x - 1] == '0')
	{
		game->map.map_array[y][x - 1] = 'N';
		game->map.map_array[y][x] = '0';
	}
	else if (game->map.map_array[y][x - 1] == 'P')
		death(game);
}

void	move_N_right(t_game *game, int y, int x)
{
	if (game->map.map_array[y][x + 1] == '0')
	{
		game->map.map_array[y][x + 1] = 'N';
		game->map.map_array[y][x] = '0';
	}
	else if (game->map.map_array[y][x + 1] == 'P')
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
				else if (y < game->pcoords.y)
					move_N_down(game, y, x);
				else if (x > game->pcoords.x)
					move_N_left(game, y, x);
				else if (x < game->pcoords.x)
					move_N_right(game, y, x);
			}
			x++;
		}
		y++;
	}
}
