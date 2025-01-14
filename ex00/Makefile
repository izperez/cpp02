# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izperez <izperez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 11:56:05 by izperez           #+#    #+#              #
#    Updated: 2025/01/07 13:34:07 by izperez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDE = Fixed.hpp

.SILENT:
all: $(NAME)

$(NAME): $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I.
			@echo "\033[32mOK Compiled!\033[0m"

$(OBJS): $(SRCS)
			$(CC) $(CFLAGS) -c $(SRCS)
			@echo "\033[32mObjets $@ created!\033[0m"

clean:
		rm -rf $(OBJS)
		@echo "\033[31mObjets destroyed!\033[0m"

fclean:
		rm -rf $(NAME)
		@echo "\033[31mExecutable Destroyed!\033[0m"

re: fclean all

.PHONY: all clean fcelan re