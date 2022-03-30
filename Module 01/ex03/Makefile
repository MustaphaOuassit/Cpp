# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 12:52:46 by mustapha          #+#    #+#              #
#    Updated: 2022/03/30 18:51:34 by mustapha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary

SRC =  main.cpp\
	   Weapon.cpp\
	   HumanA.cpp\
	   HumanB.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all