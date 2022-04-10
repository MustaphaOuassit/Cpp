# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 16:10:39 by mustapha          #+#    #+#              #
#    Updated: 2022/04/10 10:03:14 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hordeoFZombies

SRC =  main.cpp\
	   zombieHord.cpp\
	   Zombie.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all