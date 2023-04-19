# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 14:39:43 by ecaruso           #+#    #+#              #
#    Updated: 2023/04/19 18:08:14 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
LIBFT = libft/libft.a
SRC = \
main.c \
read_map.c \
utils.c \

OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall -Wextra -Werror
GCC = gcc -c

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	make -C libft all bonus
	$(CC) $(OBJ) $(LIBFT) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	make -C libft clean
	rm -f $(OBJ)

fclean : clean
	make -C libft fclean
	rm -f $(NAME)

re : fclean all