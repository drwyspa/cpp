# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 18:47:14 by pjedrycz          #+#    #+#              #
#    Updated: 2025/11/03 22:21:58 by pjedrycz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	ex00
SRC = 	./src/Animal.cpp \
		./src/Cat.cpp \
		./src/Dog.cpp \
		./src/WrongAnimal.cpp \
		./src/WrongCat.cpp \
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