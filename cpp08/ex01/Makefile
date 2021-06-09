# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 11:43:33 by dchampda          #+#    #+#              #
#    Updated: 2021/05/20 11:43:35 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98


SRCS	= main.cpp Span.cpp
OBJS	= $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(fLAGS) -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(fLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE)
