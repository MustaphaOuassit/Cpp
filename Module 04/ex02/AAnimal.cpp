/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:11:04 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 14:11:53 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("AAnimal")
{
    std::cout << "AAnimal Constractor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & copy)
{
    *this = copy;
    std::cout << "AAnimal Copy Constractor called" << std::endl;
}

AAnimal::AAnimal(std::string const & type): type(type)
{
    std::cout << "AAnimal type Constractor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &inst) {
    this->type = inst.type;
    return *this;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal sound!" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return this->type;
}