/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:28:04 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/25 02:21:03 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Default Intern Constructor called" << std::endl;
}

Intern::Intern(Intern const & copy)
{
    std::cout << "Intern Copy Constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &inst) {
    (void)inst;
    return *this;
}

Intern::~Intern(void)
{
    std::cout << "Intern Destructor called" << std::endl;
}

AForm* Intern::makeShrubberyCreationForm(const std::string target)
{
    std::cout << "Intern makeShrubberyCreationForm" << std::endl;
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::mkaeRobotomyRequestForm(const std::string target)
{
    std::cout << "Intern makeRobotomyRequestForm" << std::endl;
    return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidentialPardonForm(const std::string target)
{
    std::cout << "Intern makePresidentialPardonForm" << std::endl;
    return (new PresidentialPardonForm(target));
}

const char *Intern::FormNotFoundException::what() const throw()
{
  return ("Form not found.");
}

AForm* Intern::makeForm(const std::string &form, const std::string &target)
{
    AForm* (Intern::*funcPtr[3])(std::string const) = {
        &Intern::makeShrubberyCreationForm,
        &Intern::mkaeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };

    std::string Forms[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };
    for (int i = 0; i < 3; i++)
    {
        if(Forms[i] == form)
        {
            std::cout << "Intern creates " << Forms[i] << std::endl;
            return((this->*funcPtr[i])(target));
        }
    }
    throw FormNotFoundException();
    return (NULL);
    
}
