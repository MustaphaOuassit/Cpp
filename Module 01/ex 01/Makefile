# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 16:10:39 by mustapha          #+#    #+#              #
#    Updated: 2022/03/29 16:53:22 by mustapha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hordeoFZombies

SRC =  main.cpp\
	   zombieHord.cpp\
	   Zombie.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all