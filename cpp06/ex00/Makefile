# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 12:30:43 by dchampda          #+#    #+#              #
#    Updated: 2021/05/07 12:30:44 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98


SRCS	= main.cpp Conversion.cpp
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

.PHONY : clean fclean re all