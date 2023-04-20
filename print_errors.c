/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:21:54 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/20 19:37:47 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_str_lenght(t_game *game)
{
	int	i;

	i = 0;
	while (game->map.map_array[i] != '\0')
	{
		if (int_strlen(game->map.map_array[i]) != game->map.map_width)
		{
			ft_printf("ERROR:\ni need a rectangular map to work, hurry up bozo >:(\n");
			exit(1);
		}
		i++;
	}
	ft_printf("%s\n", game->map.map_array[0]);
}
