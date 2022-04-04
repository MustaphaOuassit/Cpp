# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 16:47:29 by mouassit          #+#    #+#              #
#    Updated: 2022/04/04 13:20:48 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC =  main.cpp\
	   Fixed.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++ -Wall -Wextra -Werror  $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all