/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:59:22 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/20 22:09:01 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Default Bureaucrat Constractor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    std::cout << "Bureaucrat Arguments(name,grade) Constractor called" << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->name = name;
    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
    std::cout << "Bureaucrat Copy Constractor called" << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &inst) {
    this->name = inst.name;
    this->grade = inst.grade;
    return *this;
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

std::ostream&	operator<<(std::ostream& cout, Bureaucrat const & inst)
{
    cout << inst.getName() << ", bureaucrat " << inst.getGrade() << ".";
    return (cout);
}