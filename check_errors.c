/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:22:00 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/24 12:30:10 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_errors(t_game *game)
{
	check_str_lenght(game);
	check_up_n_bottom(game->map.map_array, 0);
	check_up_n_bottom(game->map.map_array, game->map.map_height -1);
	check_sides(game->map.map_array, 0, game->map.map_height - 1);
	check_sides(game->map.map_array, game->map.map_width - 1, game->map.map_height - 1);
}