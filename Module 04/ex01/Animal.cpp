/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:58:55 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/27 00:25:41 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal")
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const & copy)
{
    *this = copy;
    std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::Animal(std::string const & type): type(type)
{
    std::cout << "Animal type Constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &inst) {
    this->type = inst.type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}