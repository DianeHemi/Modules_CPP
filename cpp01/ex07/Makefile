# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 14:40:41 by dchampda          #+#    #+#              #
#    Updated: 2021/03/29 14:40:43 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(fLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE)
