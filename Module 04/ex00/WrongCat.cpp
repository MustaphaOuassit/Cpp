/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:33:23 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 02:37:50 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constractor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy)
{
    *this = copy;
    std::cout << "WrongCat Copy Constractor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &inst) {
    this->type = inst.type;
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat: meow meow!" << std::endl;
}