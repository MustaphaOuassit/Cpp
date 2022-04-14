/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:19:21 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 14:16:40 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):AAnimal("Cat")
{
    std::cout << "Cat Constractor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(Cat const & copy)
{
    *this = copy;
    std::cout << "Cat Copy Constractor called" << std::endl;
}

Cat &Cat::operator=(const Cat &inst) {
    this->type = inst.type;
    return *this;
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "meow meow!" << std::endl;
}