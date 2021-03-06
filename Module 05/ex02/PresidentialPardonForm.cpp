/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 03:09:47 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 17:28:12 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):AForm("ShrubberyCreationForm", 25, 5)
{
    std::cout << "Default PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
:AForm(copy),target(copy.getTarget())
{
    std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
:AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm Arguments(target) Constructor called" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &inst) {
   AForm::operator=(inst);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    checkExecute(executor);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


std::string PresidentialPardonForm::getTarget(void) const
{
    return this->target;
}