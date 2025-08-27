# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 20:13:33 by pjedrycz          #+#    #+#              #
#    Updated: 2025/08/27 21:55:37 by pjedrycz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = PhoneBook.cpp Contact.cpp main.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re