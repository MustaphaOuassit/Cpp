/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:23:07 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/10 16:25:15 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int number;
        static const int bits = 8;
    public:
        Fixed(void);
        Fixed(Fixed const & number);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed(void);
        
        int getRawBits(void) const;
        Fixed& operator=(Fixed const & rhs);
        void setRawBits(int const raw);
        float toFloat(void) const;
        int   toInt(void) const;

        bool operator>(Fixed const & rhs) const;
        bool operator<(Fixed const & rhs) const;
        bool operator>=(Fixed const & rhs) const;
        bool operator<=(Fixed const & rhs) const;
        bool operator==(Fixed const & rhs) const;
        bool operator!=(Fixed const & rhs) const;
        
        Fixed operator+(Fixed const & rhs) const;
        Fixed operator-(Fixed const & rhs) const;
        Fixed operator*(Fixed const & rhs) const;
        Fixed operator/(Fixed const & rhs) const;
        
        Fixed	operator++(int);
	    Fixed&	operator++(void);
	    Fixed&	operator--(void);
	    Fixed	operator--(int);

	    static Fixed&	min(Fixed& argOne, Fixed& argTwo);
	    const static Fixed&	min(Fixed const & argOne, Fixed const & argTwo);
	    static Fixed&	max(Fixed& argOne, Fixed& argTwo);
	    const static Fixed&	max(Fixed const & argOne, Fixed const & argTwo);
};

std::ostream& operator<<(std::ostream& value, Fixed const & number);
#endif