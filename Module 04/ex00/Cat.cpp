/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:19:21 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 02:34:40 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):Animal("Cat")
{
    std::cout << "Cat Constractor called" << std::endl;
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
    std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "meow meow!" << std::endl;
}