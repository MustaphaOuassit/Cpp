/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:25:53 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 05:23:05 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
    Bureaucrat bureaucrat ("test", 140);
    ShrubberyCreationForm shrubbery("home");

    try {
        bureaucrat.executeForm(shrubbery);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}