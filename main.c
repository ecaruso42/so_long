/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:23:21 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/10 18:49:29 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <mlx.h>

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 1)
	{
		ft_printf("ERROR:\nbruh pass me at least an argument :/\n");
	}
	else if (argc > 2)
	{
		ft_printf("ERROR:\nno wait now the arguments are too many >.<\n");
	}
	else if (argc == 2)
	{
		game.map.dir = 3;
		check_ber_ext(argv[1]);
		create_map(argv[1], &game);
		ft_print_array(game.map.map_array);
		create_window(&game);
		make_graphics(&game);
		scan_map(&game);
		mlx_key_hook(game.graphics.mlx_window, key_pressed, &game);
		mlx_loop(game.graphics.mlx_pointer);
	}
	return (0);
}

void	death(t_game *game)
{
	mlx_destroy_window(game->graphics.mlx_pointer,
		game->graphics.mlx_window);
	free_map(game);
	exit(1);
}

void	win(t_game *game)
{
	mlx_destroy_window(game->graphics.mlx_pointer,
		game->graphics.mlx_window);
	free_map(game);
	exit(1);
}
