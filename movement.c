/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:32:51 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/09 18:57:30 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_up(t_game *game)
{
	if (game->map.map_array[game->pcoords.y - 1][game->pcoords.x] == '1')
		return (0);
	else if (game->map.map_array[game->pcoords.y - 1][game->pcoords.x] == 'E'
		&& game->map.collectibles != 0)
		return (0);
	else if (game->map.map_array[game->pcoords.y - 1][game->pcoords.x] == 'E'
		&& game->map.collectibles == 0)
		win(game);
	else if (game->map.map_array[game->pcoords.y - 1][game->pcoords.x] == 'N')
		death(game);
	else
	{
		if (game->map.map_array[game->pcoords.y - 1][game->pcoords.x] == 'C')
			game->map.collectibles += -1;
		game->map.map_array[game->pcoords.y][game->pcoords.x] = '0';
		game->map.map_array[game->pcoords.y - 1][game->pcoords.x] = 'P';
		game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
				"./images/P_look_U.xpm", &game->map.map_width,
				&game->map.map_height);
		return (1);
	}
	return (0);
}

int	move_down(t_game *game)
{
	if (game->map.map_array[game->pcoords.y + 1][game->pcoords.x] == '1')
		return (0);
	else if (game->map.map_array[game->pcoords.y + 1][game->pcoords.x] == 'E'
		&& game->map.collectibles != 0)
		return (0);
	else if (game->map.map_array[game->pcoords.y + 1][game->pcoords.x] == 'E'
		&& game->map.collectibles == 0)
		win(game);
	else if (game->map.map_array[game->pcoords.y + 1][game->pcoords.x] == 'N')
		death(game);
	else
	{
		if (game->map.map_array[game->pcoords.y + 1][game->pcoords.x] == 'C')
			game->map.collectibles += -1;
		game->map.map_array[game->pcoords.y][game->pcoords.x] = '0';
		game->map.map_array[game->pcoords.y + 1][game->pcoords.x] = 'P';
		game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
				"./images/P_look_D.xpm", &game->map.map_width,
				&game->map.map_height);
		return (1);
	}
	return (0);
}

int	move_right(t_game *game)
{
	if (game->map.map_array[game->pcoords.y][game->pcoords.x + 1] == '1')
		return (0);
	else if (game->map.map_array[game->pcoords.y][game->pcoords.x + 1] == 'E'
		&& game->map.collectibles != 0)
		return (0);
	else if (game->map.map_array[game->pcoords.y][game->pcoords.x + 1] == 'E'
		&& game->map.collectibles == 0)
		win(game);
	else if (game->map.map_array[game->pcoords.y][game->pcoords.x + 1] == 'N')
		death(game);
	else
	{
		if (game->map.map_array[game->pcoords.y][game->pcoords.x + 1] == 'C')
			game->map.collectibles += -1;
		game->map.map_array[game->pcoords.y][game->pcoords.x] = '0';
		game->map.map_array[game->pcoords.y][game->pcoords.x + 1] = 'P';
		game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
				"./images/P_look_R.xpm", &game->map.map_width,
				&game->map.map_height);
		return (1);
	}
	return (0);
}

int	move_left(t_game *game)
{
	if (game->map.map_array[game->pcoords.y][game->pcoords.x - 1] == '1')
		return (0);
	else if (game->map.map_array[game->pcoords.y][game->pcoords.x - 1] == 'E'
		&& game->map.collectibles != 0)
		return (0);
	else if (game->map.map_array[game->pcoords.y][game->pcoords.x - 1] == 'E'
		&& game->map.collectibles == 0)
		win(game);
	else if (game->map.map_array[game->pcoords.y][game->pcoords.x - 1] == 'N')
		death(game);
	else
	{
		if (game->map.map_array[game->pcoords.y][game->pcoords.x - 1] == 'C')
			game->map.collectibles += -1;
		game->map.map_array[game->pcoords.y][game->pcoords.x] = '0';
		game->map.map_array[game->pcoords.y][game->pcoords.x - 1] = 'P';
		game->image.p = mlx_xpm_file_to_image (game->graphics.mlx_pointer,
				"./images/P_look_L.xpm", &game->map.map_width,
				&game->map.map_height);
		return (1);
	}
	return (0);
}
