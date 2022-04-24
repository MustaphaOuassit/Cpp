# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/24 18:06:50 by mouassit          #+#    #+#              #
#    Updated: 2022/04/24 18:09:40 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC =  main.cpp\
       Bureaucrat.cpp\
	   AForm.cpp\
	   ShrubberyCreationForm.cpp\
	   RobotomyRequestForm.cpp\
	   PresidentialPardonForm.cpp

all : $(NAME)

$(NAME): $(SRC)
	@c++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
	
clean:
	@rm -rf $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all