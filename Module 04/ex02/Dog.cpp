/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:16:34 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 14:16:14 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
    std::cout << "Dog Constractor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Dog const & copy)
{
    *this = copy;
    std::cout << "Dog Copy Constractor called" << std::endl;
}

Dog &Dog::operator=(const Dog &inst) {
    this->type = inst.type;
    return *this;
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "brak brak!" << std::endl;
}