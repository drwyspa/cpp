# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/25 21:17:37 by pjedrycz          #+#    #+#              #
#    Updated: 2025/09/25 22:10:42 by pjedrycz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	harl
SRC = 	./src/Harl.cpp \
		./src/main.cpp
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