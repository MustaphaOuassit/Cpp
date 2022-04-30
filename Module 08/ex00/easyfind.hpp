/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:52:55 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/30 22:43:20 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T &container, int number)
{
    typename T::iterator iterator;
    iterator = std::find(container.begin(), container.end(), number);
        if(iterator == container.end())
            return (0);
    return 1;
}

#endif