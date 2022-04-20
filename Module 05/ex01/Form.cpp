/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:29:38 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/20 23:24:05 by mouassit         ###   ########.fr       */
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


// Form &Form::operator=(const Form &inst) {
//     this->name = inst.name;
//     this->grade = inst.grade;
//     return *this;
// }



Form::~Form(void)
{
    std::cout << "Form Destructor called" << std::endl;
}