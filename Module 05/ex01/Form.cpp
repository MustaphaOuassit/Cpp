/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:29:38 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/21 00:46:36 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
    std::cout << "Default Form Constractor called" << std::endl;
}

Form::Form(Form const & copy)
{
    std::cout << "Form Copy Constractor called" << std::endl;
    *this = copy;
}
Form::Form(std::string name, int signGrade, int executeGrade)
{
    std::cout << "Form Arguments(name,signGrade,executeGrade) Constractor called" << std::endl;
    if(signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    if(signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
    this->name = name;
    this->isSigned = false;
    this->signGrade = signGrade;
    this->executeGrade = executeGrade;
}
Form &Form::operator=(const Form &inst) {
    this->name = inst.name;
    this->isSigned = inst.isSigned;
    this->signGrade = inst.signGrade;
    this->executeGrade = inst.executeGrade;
    return *this;
}

Form::~Form(void)
{
    std::cout << "Form Destructor called" << std::endl;
}

// std::ostream&	operator<<(std::ostream& cout, Form const & inst)
// {
//     cout << inst.getName() << ", Form " << inst.getGrade() << ".";
//     return (cout);
// }