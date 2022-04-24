/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:28:04 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 18:44:57 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Default Intern Constructor called" << std::endl;
}

Intern::Intern(Intern const & copy)
{
    std::cout << "Intern Copy Constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &inst) {
    (void)inst;
    return *this;
}

Intern::~Intern(void)
{
    std::cout << "Intern Destructor called" << std::endl;
}

