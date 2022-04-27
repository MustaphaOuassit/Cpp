/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:16:34 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/27 00:25:41 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
    std::cout << "Dog Constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Dog const & copy)
{
    *this = copy;
    std::cout << "Dog Copy Constructor called" << std::endl;
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