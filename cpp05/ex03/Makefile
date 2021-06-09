# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 18:14:15 by dchampda          #+#    #+#              #
#    Updated: 2021/05/05 18:14:21 by dchampda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98


SRCS	= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
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