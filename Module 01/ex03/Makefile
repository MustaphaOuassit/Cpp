# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 12:52:46 by mustapha          #+#    #+#              #
#    Updated: 2022/04/10 10:03:31 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary

SRC =  main.cpp\
	   Weapon.cpp\
	   HumanA.cpp\
	   HumanB.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all