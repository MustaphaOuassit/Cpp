/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:52:33 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/30 22:45:51 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> array;

    array.push_back(1);   
    array.push_back(2);   
    array.push_back(3);   
    array.push_back(4);
    std::cout <<  easyfind(array,4) << std::endl;
}