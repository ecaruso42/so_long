/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:32:51 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/08 19:48:58 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_up(t_game *game)
{
	game->image.P = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
				"./images/P_look_U.xpm", &game->map.map_width, &game->map.map_height);
	return(0);
}