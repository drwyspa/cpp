# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 20:58:29 by pjedrycz          #+#    #+#              #
#    Updated: 2025/10/10 21:49:31 by pjedrycz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	Fixed_4
SRC = 	Fixed.cpp \
		Point.cpp \
		bsp.cpp \
		main.cpp
CC = 	c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re