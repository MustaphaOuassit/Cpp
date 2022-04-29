# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 10:45:40 by mustapha          #+#    #+#              #
#    Updated: 2022/04/29 15:11:42 by mustapha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC =  main.cpp\
	   Base.cpp\
	   identify.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
	
clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all