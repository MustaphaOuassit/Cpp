# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 23:41:12 by mustapha          #+#    #+#              #
#    Updated: 2022/04/14 14:21:19 by mustapha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC =  main.cpp\
	   AAnimal.cpp\
	   Dog.cpp\
	   Cat.cpp\
	   WrongAnimal.cpp\
	   WrongCat.cpp\
	   Brain.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all