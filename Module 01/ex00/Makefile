# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:51:51 by mustapha          #+#    #+#              #
#    Updated: 2022/03/28 22:26:26 by mustapha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC =  randomChump.cpp\
	   Zombie.cpp\
	   main.cpp\
	   newZombie.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all