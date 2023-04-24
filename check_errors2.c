/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:21:54 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/24 17:47:26 by ecaruso          ###   ########.fr       */
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
			ft_printf("ERROR:\nneed a rectangular map to work, bozo >:(\n");
			exit(1);
		}
		i++;
	}
}

void	check_up_n_bottom(char **map_array, int row)
{
	int	i;

	i = 0;
	while (map_array[row][i] != '\0')
	{
		if (map_array[row][i] != '1')
		{
			ft_printf("ERROR:\nwalls are not closed, pls fix that >:/\n");
			exit(1);
		}
		i++;
	}
}

void	check_sides(char **map_array, int column, int height)
{
	int	i;

	i = 0;
	while (height != 0)
	{
		if (map_array[i][column] != '1')
		{
			ft_printf("ERROR:\nwalls are not closed, pls fix that >:/\n");
			exit(1);
		}
		i++;
		height--;
	}
}

void	check_ber_ext(char *str)
{
	char	file_ext[5];
	int		len;
	int		is_valid;

	len = int_strlen(str);
	ft_strlcpy(file_ext, str + len - 4, 5);
	is_valid = ft_strcmp(file_ext, ".ber");
	if (is_valid != 0)
	{
		ft_printf("ERROR:\nthat's not a .ber file,idiot >:O\n");
		exit(1);
	}
}
