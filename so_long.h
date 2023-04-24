/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:21:30 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/24 17:35:21 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif

# include <mlx.h>
# include <fcntl.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_map
{
	char	*map_str;
	char	**map_array;
	int		map_height;
	int		map_width;
	int		map_collectibles;
	int		map_player;
	int		map_exit;
	int		map_enemies;
}t_map;

typedef struct s_game
{
	t_map	map;
}t_game;

void	create_map(char *argv, t_game *game);
int		array_height(char const *str, char c);
int		int_strlen(const char *str);
void	check_errors(t_game *game);
void	check_str_lenght(t_game *game);
void	check_up_n_bottom(char **map_array, int row);
void	check_sides(char **map_array, int column, int height);
void	check_ber_ext(char *str);
void	check_missing_elements(t_game *game);
int		str_countchar(char *str, int element);
void	check_unallowed_elements(t_game *game);

#endif