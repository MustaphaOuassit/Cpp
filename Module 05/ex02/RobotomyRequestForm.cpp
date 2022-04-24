/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:34:28 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 03:08:26 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):AForm("ShrubberyCreationForm", 72, 45)
{
    std::cout << "Default RobotomyRequestForm Constractor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
:AForm(copy),target(copy.getTarget())
{
    std::cout << "RobotomyRequestForm Copy Constractor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
:AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm Arguments(target) Constractor called" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &inst) {
   AForm::operator=(inst);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try{
        checkExecute(executor);
    }
    catch(std::exception & e) {
        throw;
    }
    if ((time(0) % 2) == 0)
        std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
    else
        std::cout << "The robotomy failed.";
}


std::string RobotomyRequestForm::getTarget(void) const
{
    return this->target;
}