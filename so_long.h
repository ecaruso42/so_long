/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:21:30 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/19 18:35:50 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif

# include <mlx.h>
# include <fcntl.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_map
{
	char	*map_str;
	char	**map_array;
	int		map_height;
	int		map_width;
}t_map;

typedef struct s_game
{
	t_map	map;
}t_game;

void	create_map(char *argv, t_game *game);
int		array_height(char const *str, char c);

#endif