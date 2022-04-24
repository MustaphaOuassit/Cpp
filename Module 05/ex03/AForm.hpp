/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:37:09 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 00:23:13 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
class AForm
{
    public:
        AForm(void);
        AForm(AForm const & copy);
        AForm(std::string const name, int const signGrade, int const executeGrade);
        AForm &operator=(const AForm &inst);
        virtual ~AForm(void);
        
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
        
        class NotSignedException : public std::exception {
            public:
                const char *what() const throw();
        };
        
        std::string    getName(void) const;
        bool           getIsSigned(void) const;
        int            getSignGrade(void) const;
        int            getExecuteGrade(void) const;

        void    beSigned(Bureaucrat const & sign);
        void    checkExecute(const Bureaucrat &executor) const;
        virtual void execute(Bureaucrat const & executor) const = 0;

    private:
        std::string const name;
        bool isSigned;
        int const signGrade;
        int const executeGrade;
};

std::ostream&	operator<<(std::ostream& cout, AForm const & inst);

#endif