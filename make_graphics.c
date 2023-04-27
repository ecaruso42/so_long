/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_graphics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:38:29 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/27 19:56:53 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_window(t_game *game)
{
	game->graphics.mlx_pointer = mlx_init();
	game->graphics.mlx_window = mlx_new_window(game->graphics.mlx_pointer,
			(128 * game->map.map_width), (128 * game->map.map_height) + 128,
			"Cosí_lungo");
}

static void	inizialize_tiles_part_one(t_game *game)
{
	game->image.ground = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/ground.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.wall = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/wall.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
}

void	make_graphics(t_game *game)
{
	inizialize_tiles_part_one(game);
}
