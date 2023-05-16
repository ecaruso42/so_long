/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:20:25 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/16 15:50:42 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_pressed(int keycode, t_game *game)
{
	if (keycode == 53)
	{
		mlx_destroy_window(game->graphics.mlx_pointer,
			game->graphics.mlx_window);
		free_map(game);
		exit(1);
	}
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.mlx_window);
	if (keycode == 13 || keycode == 126)
		game->map.moves += move_up(game);
	if (keycode == 1 || keycode == 125)
		game->map.moves += move_down(game);
	if (keycode == 2 || keycode == 124)
		game->map.moves += move_right(game);
	if (keycode == 0 || keycode == 123)
		game->map.moves += move_left(game);
	else if (keycode == 49)
		stab(game);
	enemy_movement(game);
	scan_map(game);
	return (0);
}
