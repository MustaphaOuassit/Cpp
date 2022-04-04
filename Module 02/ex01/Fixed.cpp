/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:08:48 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/04 16:55:37 by mouassit         ###   ########.fr       */
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
    *this = number;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->number = value << this->bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf(value * (1 << this->bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void) const
{
    return (this->number);
}

void Fixed::setRawBits(int const raw)
{
    this->number = raw;
}

int   Fixed::toInt(void) const
{
    return(this->number >> this->bits);
}

float   Fixed::toFloat(void) const
{
    return((float)this->number / (1 << this->bits));
}

std::ostream& operator<<(std::ostream& value, Fixed const & number)
{
    value << number.toFloat();
    return value;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->number = rhs.getRawBits();
    return *this;
}
