/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:53:06 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/19 19:59:07 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_map(char *argv, t_game *game)
{
	int	fd;

	fd = open(argv, O_RDONLY);
	game->map.map_str = malloc(sizeof(char) * BUFFER_SIZE);
	read(fd, game->map.map_str, BUFFER_SIZE);
	game->map.map_height = array_height(game->map.map_str, '\n') + 1;
	game->map.map_array = ft_split(game->map.map_str, '\n');
	game->map.map_width = ft_strlen(game->map.map_array[0]);
	//printf("%d\n", game->map.map_width);
	//printf("%d\n", game->map.map_height);
	//printf("%s\n", game->map.map_str);
	//printf("%s", game->map.map_array[0]);
}
