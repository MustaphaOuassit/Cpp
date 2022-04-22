/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:29:38 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/22 02:49:49 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): name(""), isSigned(false), signGrade(150), executeGrade(150)
{
    std::cout << "Default Form Constractor called" << std::endl;
}

Form::Form(Form const & copy): name(""), isSigned(false), signGrade(150), executeGrade(150)
{
    std::cout << "Form Copy Constractor called" << std::endl;
    *this = copy;
}
Form::Form(std::string const name, int const signGrade, int const executeGrade)
: name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
    std::cout << "Form Arguments(name,signGrade,executeGrade) Constractor called" << std::endl;
    if(signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    if(signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
}
Form &Form::operator=(const Form &inst) {
    this->isSigned = inst.getIsSigned();
    return *this;
}

Form::~Form(void)
{
    std::cout << "Form Destructor called" << std::endl;
}

void    Form::beSigned(Bureaucrat const & sign)
{
    if(sign.getGrade() <= this->signGrade)
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}

std::string   Form::getName(void) const
{
    return this->name;
}

bool    Form::getIsSigned(void) const
{
    return this->isSigned;
}

int            Form::getSignGrade(void) const
{
    return this->signGrade;
}

int            Form::getExecuteGrade(void) const
{
    return this->executeGrade;
}

std::ostream&	operator<<(std::ostream& cout, Form const & inst)
{
    cout << "Name : " << inst.getName() <<  std::endl;
    cout << "Is Signed : " << inst.getIsSigned() << std::endl;;
    cout << "Sign Grade : " << inst.getSignGrade() << std::endl;
    cout << "Execute Grade : " << inst.getExecuteGrade();
    return cout;
    
}