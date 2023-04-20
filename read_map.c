/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:53:06 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/20 19:15:28 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_map(char *argv, t_game *game)
{
	int	fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("ERROR:\nfeed me with a real map, pls! D:\n");
		exit(1);
	}
	game->map.map_str = malloc(sizeof(char) * BUFFER_SIZE);
	read(fd, game->map.map_str, BUFFER_SIZE);
	game->map.map_height = array_height(game->map.map_str, '\n') + 1;
	game->map.map_array = ft_split(game->map.map_str, '\n');
	game->map.map_width = ft_strlen(game->map.map_array[0]);
	check_errors(game);
	free(game->map.map_str);
	close(fd);
}
