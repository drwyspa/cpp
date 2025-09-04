# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 19:18:27 by pjedrycz          #+#    #+#              #
#    Updated: 2025/09/04 17:47:12 by pjedrycz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
SRC = Account.cpp tests.cpp
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re