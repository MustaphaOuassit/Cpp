/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:02:36 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/10 16:25:42 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->number = 0;
}

Fixed::Fixed(Fixed const & number)
{
    *this = number;
}

Fixed::Fixed(const int value)
{
    this->number = value << this->bits;
}

Fixed::Fixed(const float value)
{
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
    this->number = rhs.getRawBits();
    return *this;
}

Fixed&	Fixed::operator++(void)
{
    this->number++;
    return *this;
}

Fixed	Fixed::operator++(int)
{
    Fixed test(*this);
    this->number++;
    return test;
}

Fixed&	Fixed::operator--(void)
{
    this->number--;
    return *this;
}

Fixed	Fixed::operator--(int)
{
    Fixed test(*this);
    this->number--;
    return test;
}

bool Fixed::operator>(Fixed const & rhs) const
{
    return(this->number > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
    return(this->number < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
    return(this->number >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
    return(this->number <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
    return(this->number == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
    return(this->number != rhs.getRawBits());
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
    Fixed value;
    value.setRawBits(this->number - rhs.getRawBits());
	return (value);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
    Fixed value;
    value.setRawBits(this->number + rhs.getRawBits());
	return (value);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
    Fixed value(this->toFloat() * rhs.toFloat());
	return (value);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	value(this->toFloat() / rhs.toFloat());
	return (value);
}

Fixed& Fixed::min(Fixed & argOne, Fixed & argTwo)
{
    if(argOne <= argTwo)
        return (argOne);
    return(argTwo);
}

const Fixed&	Fixed::min(Fixed const & argOne, Fixed const & argTwo)
{
    if(argOne <= argTwo)
        return(argOne);
    return(argTwo);
}

Fixed& Fixed::max(Fixed & argOne, Fixed & argTwo)
{
    if(argOne >= argTwo)
        return (argOne);
    return(argTwo);
}

const Fixed&	Fixed::max(Fixed const & argOne, Fixed const & argTwo)
{
    if(argOne >= argTwo)
        return (argOne);
    return (argTwo);
}