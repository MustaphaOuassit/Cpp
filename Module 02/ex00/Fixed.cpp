/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:03:59 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/04 13:21:41 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & number)
{
    std::cout << "Copy constructor called" << std::endl;
    this->number = number.number;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->number = rhs.getRawBits();
    return *this;
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->number);
}
