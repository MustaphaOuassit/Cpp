/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 12:19:55 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/30 12:33:43 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void    iter(T *array, int len, void (*func)(const T &))
{
    for (int i = 0; i < len; i++)
        func(array[i]);
}

template <typename T>

void    print(const T &value)
{
    std::cout << value << std::endl;
}

#endif