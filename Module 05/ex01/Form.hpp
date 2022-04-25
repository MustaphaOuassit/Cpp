/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:26:44 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/23 17:26:11 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
class Form
{
    public:
        Form(void);
        Form(Form const & copy);
        Form(std::string const name, int const signGrade, int const executeGrade);
        Form &operator=(const Form &inst);
        ~Form(void);
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Form::GradeTooHighException");
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Form::GradeTooLowException");
                }
        };
        
        std::string    getName(void) const;
        bool           getIsSigned(void) const;
        int            getSignGrade(void) const;
        int            getExecuteGrade(void) const;

        void    beSigned(Bureaucrat const & sign);

    private:
        std::string const name;
        bool isSigned;
        int const signGrade;
        int const executeGrade;
};

std::ostream&	operator<<(std::ostream& cout, Form const & inst);

#endif