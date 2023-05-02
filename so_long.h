/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:21:30 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/02 21:39:51 by ecaruso          ###   ########.fr       */
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

typedef struct s_graphics
{
	void	*mlx_pointer;
	void	*mlx_window;
	int		size_tile;
}t_graphics;

typedef struct s_image
{
	void	*ground;
	void	*wall;
	void	*P;
}t_image;

typedef struct s_game
{
	t_map		map;
	t_graphics	graphics;
	t_image		image;
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
#endif

//void	*img;
//img_pl = mlx_xpm_file_to_image(game->mlx, "image/player.xpm", 32, 32);
//img_spazio =  mlx_xpm_file_to_image(game->mlx, "image/spazio.xpm", 32, 32);
//if (map[x][y] == 'p')
//	mlx_put_image_to_window(game->mlx, game->mlx_win, img_pl, int x, int y);
//if (map[x][y] == '0')
//	mlx_put_image_to_window(game->mlx, game->mlx_win, img_pl, int x, int y);