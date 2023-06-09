/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:53:06 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/17 17:45:43 by ecaruso          ###   ########.fr       */
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
	game->map.array_copy = ft_split(game->map.map_str, '\n');
	game->map.map_width = ft_strlen(game->map.map_array[0]);
	check_errors(game);
	free(game->map.map_str);
	close(fd);
}

static void	draw_map(t_game *game, int y, int x)
{
	if (game->map.map_array[y][x] == '1')
		put_wall_img(game, y, x);
	else if (game->map.map_array[y][x] == '0')
		put_ground_img(game, y, x);
	else if (game->map.map_array[y][x] == 'P')
		put_player_img(game, y, x);
	else if (game->map.map_array[y][x] == 'N')
		put_enemy_img(game, y, x);
	else if (game->map.map_array[y][x] == 'E')
		put_exit_img(game, y, x);
	else if (game->map.map_array[y][x] == 'C')
		put_c_img(game, y, x);
	else if (game->map.map_array[y][x] == 'D')
		put_d_img(game, y, x);
}

void	scan_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map.map_array[y])
	{
		x = 0;
		while (game->map.map_array[y][x])
		{
			draw_map(game, y, x);
			x++;
		}
		y++;
		display_moves(game);
	}
}

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (game->map.map_array[i])
	{
		free(game->map.map_array[i]);
		i++;
	}
	while (game->map.array_copy[i])
	{
		free(game->map.array_copy[i]);
		i++;
	}
}

void	display_moves(t_game *game)
{
	char	*s_moves;

	s_moves = ft_itoa(game->map.moves);
	mlx_string_put(game->graphics.mlx_pointer, game->graphics.mlx_window,
		16, 16, 0xFFFFFF, "Moves:");
	mlx_string_put(game->graphics.mlx_pointer, game->graphics.mlx_window,
		80, 16, 0xFFFFFF, s_moves);
	free(s_moves);
}
