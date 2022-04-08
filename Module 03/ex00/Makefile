# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 17:19:30 by mouassit          #+#    #+#              #
#    Updated: 2022/04/08 17:21:32 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC =  main.cpp\
	   ClapTrap.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++ -Wall -Wextra -Werror  $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all