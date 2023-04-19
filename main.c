/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:23:21 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/19 16:58:03 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <mlx.h>

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		create_map(argv[1], &game);
	}

	// void	*mlx;
	// void	*mlx_win;

	// mlx = mlx_init();
	// mlx_win = mlx_new_window(mlx, 2048, 1080, "Cosí lungo");
	// mlx_loop(mlx);
}