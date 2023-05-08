/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:22:00 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/08 17:01:21 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_errors(t_game *game)
{
	check_str_lenght(game);
	check_up_n_bottom(game->map.map_array, 0);
	check_up_n_bottom(game->map.map_array, game->map.map_height -1);
	check_sides(game->map.map_array, 0, game->map.map_height - 1);
	check_sides(game->map.map_array, game->map.map_width - 1,
		game->map.map_height - 1);
	check_missing_elements(game);
	check_unallowed_elements(game);
}

void	check_missing_elements(t_game *game)
{
	game->map.collectibles = str_countchar(game->map.map_str, 'C');
	if (game->map.collectibles == 0)
	{
		ft_printf("ERROR 404:\nCollectibles not found\n");
		exit(1);
	}
	game->map.player = str_countchar(game->map.map_str, 'P');
	if (game->map.player == 0)
	{
		ft_printf("ERROR 404:\nPlayer not found\n");
		exit(1);
	}
	game->map.exit = str_countchar(game->map.map_str, 'E');
	if (game->map.exit == 0)
	{
		ft_printf("ERROR 404:\nExit not found\n");
		exit(1);
	}
}

void	check_unallowed_elements(t_game *game)
{
	int	i;

	i = 0;
	while (game->map.map_str[i] != '\0')
	{
		if (game->map.map_str[i] != '0' && game->map.map_str[i] != '1'
			&& game->map.map_str[i] != 'C' && game->map.map_str[i] != 'E'
			&& game->map.map_str[i] != 'N' && game->map.map_str[i] != 'P'
			&& game->map.map_str[i] != '\n')
		{
			ft_printf("ERROR:\nElement not valid\n");
			exit(1);
		}
		i++;
	}
}
