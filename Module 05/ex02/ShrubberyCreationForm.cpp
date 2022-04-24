/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:22:08 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 01:39:27 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Default ShrubberyCreationForm Constractor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy)
:AForm(copy),target(copy.getTarget())
{
    std::cout << "ShrubberyCreationForm Copy Constractor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
:AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm Arguments(target) Constractor called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &inst) {
   AForm::operator=(inst);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try{
        checkExecute(executor);
    }
    catch(std::exception & e) {
        throw;
    }
    std::ofstream file;
    
    file.open(((this->target) + "_shrubbery"));
    file << "       ###" << std::endl;
    file << "      #o###" << std::endl;
    file << "    #####o###" << std::endl;
    file << "   #o#/#|#/###" << std::endl;
    file << "    ###/|/#o#" << std::endl;
    file << "     # }|{  #" << std::endl;
    file << "       }|{" << std::endl;
    
    file.close();
}


std::string ShrubberyCreationForm::getTarget(void) const
{
    return this->target;
}