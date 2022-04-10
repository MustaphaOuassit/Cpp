# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 10:44:39 by mouassit          #+#    #+#              #
#    Updated: 2022/04/10 16:28:20 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC =  main.cpp\
	   ClapTrap.cpp\
	   ScavTrap.cpp\
	   FragTrap.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all