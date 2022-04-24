/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:59:22 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/23 17:39:29 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void): name("")
{
    std::cout << "Default Bureaucrat Constractor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade)
{
    std::cout << "Bureaucrat Arguments(name,grade) Constractor called" << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy):name(copy.getName())
{
    std::cout << "Bureaucrat Copy Constractor called" << std::endl;
    *this = copy;
}



Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

void    Bureaucrat::incrementBureaucrat(void)
{
    this->grade--;
    if(this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrementBureaucrat(void)
{
    this->grade++;
    if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::string    Bureaucrat::getName(void) const
{
    return this->name;
}

int    Bureaucrat::getGrade(void) const
{
    return this->grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &inst)
{
    this->grade = inst.getGrade();
    return *this;
}


std::ostream&	operator<<(std::ostream& cout, Bureaucrat const & inst)
{
    cout << inst.getName() << ", bureaucrat " << inst.getGrade() << ".";
    return (cout);
}

void    Bureaucrat::signForm(AForm& form) const
{
    try {
        form.beSigned(*this);
    }
    catch(std::exception& e)
    {
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " grade is low." << std::endl;
        return;
    }
    std::cout << this->getName() << " signed " << form.getName() << std::endl;
}