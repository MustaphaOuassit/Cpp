/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:18:18 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/23 23:44:50 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(ShrubberyCreationForm const & copy);
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &inst);
        ~ShrubberyCreationForm(void);

        std::string getTarget(void) const;
        void execute(Bureaucrat const & executor) const;
    private:
        std::string const target;
};

#endif