/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:20:25 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/08 19:44:47 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
int	key_pressed(int keycode, t_game *game)
{
	if (keycode == 53)
	{
		mlx_destroy_window(game->graphics.mlx_pointer, game->graphics.mlx_window);
		free_map(game);
		exit(1);
	}
	if (keycode == 13 || keycode == 126)
		game->map.moves += move_up(game);
	scan_map(game);
	return(0);
}