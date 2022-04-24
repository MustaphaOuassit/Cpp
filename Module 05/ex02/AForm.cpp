/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:36:31 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/23 23:38:41 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): name(""), isSigned(false), signGrade(150), executeGrade(150)
{
    std::cout << "Default AForm Constractor called" << std::endl;
}

AForm::AForm(AForm const & copy): name(""), isSigned(false), signGrade(150), executeGrade(150)
{
    std::cout << "AForm Copy Constractor called" << std::endl;
    *this = copy;
}
AForm::AForm(std::string const name, int const signGrade, int const executeGrade)
: name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
    std::cout << "AForm Arguments(name,signGrade,executeGrade) Constractor called" << std::endl;
    if(signGrade < 1 || executeGrade < 1)
        throw AForm::GradeTooHighException();
    if(signGrade > 150 || executeGrade > 150)
        throw AForm::GradeTooLowException();
}
AForm &AForm::operator=(const AForm &inst) {
    this->isSigned = inst.getIsSigned();
    return *this;
}

AForm::~AForm(void)
{
    std::cout << "AForm Destructor called" << std::endl;
}

void    AForm::beSigned(Bureaucrat const & sign)
{
    if(sign.getGrade() <= this->signGrade)
        this->isSigned = true;
    else
        throw AForm::GradeTooLowException();
}

std::string   AForm::getName(void) const
{
    return this->name;
}

bool    AForm::getIsSigned(void) const
{
    return this->isSigned;
}

int            AForm::getSignGrade(void) const
{
    return this->signGrade;
}

int            AForm::getExecuteGrade(void) const
{
    return this->executeGrade;
}

const char *AForm::GradeTooHighException::what() const throw()
{
  return ("AForm::GradeTooHighException");
}

const char *AForm::GradeTooLowException::what() const throw()
{
  return ("AForm::GradeTooLowException");
}

const char *AForm::NotSignedException::what() const throw()
{
  return ("AForm::Not Signed");
}

void    AForm::checkExecute(const Bureaucrat &executor) const
{
    if(!this->getIsSigned())
        throw NotSignedException();
    if(executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& cout, AForm const & inst)
{
    cout << "Name : " << inst.getName() <<  std::endl;
    cout << "Is Signed : " << inst.getIsSigned() << std::endl;;
    cout << "Sign Grade : " << inst.getSignGrade() << std::endl;
    cout << "Execute Grade : " << inst.getExecuteGrade();
    return cout;
    
}