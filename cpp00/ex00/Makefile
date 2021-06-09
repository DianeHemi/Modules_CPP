# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/18 10:54:01 by dchampda          #+#    #+#              #
#    Updated: 2021/03/18 10:54:08 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98


SRCS	= megaphone.cpp
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