/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:21:30 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/16 19:40:41 by ecaruso          ###   ########.fr       */
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
	char	**array_copy;
	int		map_height;
	int		map_width;
	int		collectibles;
	int		player;
	int		exit;
	int		enemies;
	int		moves;
	int		dir;
	int		loop;
	int		frame;
}t_map;

typedef struct s_graphics
{
	void	*mlx_pointer;
	void	*mlx_window;
	int		size_tile;
}t_graphics;

typedef struct s_pcoords
{
	int	x;
	int	y;
}t_pcoords;
typedef struct s_image
{
	void	*ground;
	void	*wall;
	void	*p;
	void	*n;
	void	*e;
	void	*c;
	void	*d;
}t_image;

typedef struct s_game
{
	t_map		map;
	t_graphics	graphics;
	t_image		image;
	t_pcoords	pcoords;
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
void	create_window(t_game *game);
void	scan_map(t_game *game);
void	make_graphics(t_game *game);
void	put_wall_img(t_game *game, int y, int x);
void	put_ground_img(t_game *game, int y, int x);
void	ft_print_array(char **array_strings);
void	put_player_img(t_game *game, int y, int x);
void	put_enemy_img(t_game *game, int y, int x);
void	put_exit_img(t_game *game, int y, int x);
void	put_c_img(t_game *game, int y, int x);
int		key_pressed(int keycode, t_game *game);
void	free_map(t_game *game);
int		move_up(t_game *game);
int		move_down(t_game *game);
int		move_right(t_game *game);
int		move_left(t_game *game);
void	death(t_game *game);
void	win(t_game *game);
void	stab(t_game *game);
void	stab_r(t_game *game);
void	stab_l(t_game *game);
void	stab_d(t_game *game);
void	stab_u(t_game *game);
void	put_d_img(t_game *game, int y, int x);
int		key_x(t_game *game);
void	display_moves(t_game *game);
void	enemy_movement(t_game *game);
int		animation(t_game *game);
void	initialize_variables(t_game *game);

#endif