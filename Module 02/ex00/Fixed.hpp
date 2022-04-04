/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:48:57 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/04 13:13:22 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int number;
        static const int bits = 8;
    public:
        Fixed(void);
        Fixed(Fixed const & number);
        ~Fixed(void);
        int getRawBits(void) const;
        Fixed& operator=(Fixed const & rhs);
        void setRawBits(int const raw);
};

#endif