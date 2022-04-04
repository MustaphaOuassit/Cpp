/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:06:13 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/04 16:12:58 by mouassit         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& value, Fixed const & number);
#endif