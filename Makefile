# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 14:39:43 by ecaruso           #+#    #+#              #
#    Updated: 2023/05/16 16:56:43 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a
SRC = \
main.c \
read_map.c \
utils.c \
check_errors.c \
check_errors2.c \
make_graphics.c \
put_img.c \
put_img2.c \
keys.c \
movement.c \
print_array.c \
stab_animation.c \
movement_N.c \
animation.c

OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall -Wextra -Werror
GCC = gcc -c

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	make -C libft all bonus
	make -C ft_printf all
	$(CC) $(OBJ) $(LIBFT) $(PRINTF) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	make -C libft clean
	make -C ft_printf clean
	rm -f $(OBJ)

fclean : clean
	make -C libft fclean
	make -C ft_printf fclean
	rm -f $(NAME)

re : fclean all