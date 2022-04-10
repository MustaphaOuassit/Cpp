# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:51:51 by mustapha          #+#    #+#              #
#    Updated: 2022/04/10 10:03:03 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC =  randomChump.cpp\
	   Zombie.cpp\
	   main.cpp\
	   newZombie.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all