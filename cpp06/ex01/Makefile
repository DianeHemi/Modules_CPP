# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 18:41:34 by dchampda          #+#    #+#              #
#    Updated: 2021/05/10 18:41:35 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= serialize

CC		= clang++
FLAGS	= -Wall -Wextra -Werror


SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(fLAGS) -std=c++98 $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE)
