/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:03:56 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/30 11:24:09 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void    swap(T &x, T &y)
{
    T v = x;
    
    x = y;
    y = v;    
}

template <typename T>

T    min(T &x, T &y)
{
    if (x == y)
        return y;
    if (x < y)
        return x;
    else
        return y;
}

template <typename T>

T    max(T &x, T &y)
{
    if (x == y)
        return y;
    if (x > y)
        return x;
    else
        return y;
}

#endif