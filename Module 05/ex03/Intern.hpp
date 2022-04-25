/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:27:47 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/25 02:29:54 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <fstream>
class Intern
{
    public:
        Intern(void);
        Intern(Intern const & copy);
        Intern &operator=(const Intern &inst);
        ~Intern(void);
        
        AForm* makeForm(const std::string &form, const std::string &target);

    private:
        AForm* makeShrubberyCreationForm(const std::string target);
        AForm* mkaeRobotomyRequestForm(const std::string target);
        AForm* makePresidentialPardonForm(const std::string target);
};

#endif