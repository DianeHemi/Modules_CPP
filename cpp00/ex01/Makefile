# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/18 13:35:12 by dchampda          #+#    #+#              #
#    Updated: 2021/03/18 13:35:14 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phoneBook

CC		= clang++
FLAGS	= -Wall -Wextra -Werror


SRCS	= phoneBook.cpp ClassContact.cpp
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
