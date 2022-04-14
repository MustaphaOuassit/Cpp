/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:58:55 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 02:29:18 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal")
{
    std::cout << "Animal Constractor called" << std::endl;
}

Animal::Animal(Animal const & copy)
{
    *this = copy;
    std::cout << "Animal Copy Constractor called" << std::endl;
}

Animal::Animal(std::string const & type): type(type)
{
    std::cout << "Animal type Constractor called" << std::endl;
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