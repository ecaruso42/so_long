# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 14:39:43 by ecaruso           #+#    #+#              #
#    Updated: 2023/04/03 16:02:32 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRC = \

OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall -Wextra -Werror
GCC = gcc -c
all : $(NAME)

$(NAME) :
	$(GCC) $(FLAGS) $(SRC) -I.
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all