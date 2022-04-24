/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:54:21 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 03:36:08 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(Bureaucrat const & copy);
        Bureaucrat &operator=(const Bureaucrat &inst);
        ~Bureaucrat(void);
        void   incrementBureaucrat(void);
        void   decrementBureaucrat(void);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Bureaucrat::GradeTooHighException");
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Bureaucrat::GradeTooLowException");
                }
        };
        std::string    getName(void) const;
        int    getGrade(void) const;
        void   signForm(AForm& form) const;
        void   executeForm(AForm const & form);
        private:
            std::string const name;
            int grade;
};

std::ostream&	operator<<(std::ostream& cout, Bureaucrat const & inst);

#endif