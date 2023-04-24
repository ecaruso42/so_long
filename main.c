/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:23:21 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/24 12:40:30 by ecaruso          ###   ########.fr       */
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
		check_ber_ext(argv[1]);
		create_map(argv[1], &game);
	}
	return (0);
	// void	*mlx;
	// void	*mlx_win;

	// mlx = mlx_init();
	// mlx_win = mlx_new_window(mlx, 2048, 1080, "Cosí lungo");
	// mlx_loop(mlx);
}
