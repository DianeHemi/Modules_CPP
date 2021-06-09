# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 11:09:55 by dchampda          #+#    #+#              #
#    Updated: 2021/05/11 11:09:57 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= identify

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98


SRCS	= main.cpp Base.cpp
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