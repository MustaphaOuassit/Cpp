/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:26:44 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/21 00:53:32 by mouassit         ###   ########.fr       */
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
        Form(std::string name, int signGrade, int executeGrade);
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
        std::string name;
        bool isSigned;
        int signGrade;
        int executeGrade;
};

#endif