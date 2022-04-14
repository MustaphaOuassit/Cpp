/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:38:00 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 02:37:16 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal")
{
    std::cout << "WrongAnimal Constractor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
    *this = copy;
    std::cout << "WrongAnimal Copy Constractor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const & type): type(type)
{
    std::cout << "WrongAnimal type Constractor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &inst) {
    this->type = inst.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}