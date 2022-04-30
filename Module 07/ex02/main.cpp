/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:25:26 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/30 14:54:19 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<std::string> arrayOne;
    Array <std::string> arrayTwo(10);
    
    std::cout << "len arrayOne :  " << arrayOne.size() << std::endl;
    std::cout << "len arrayTwo = "<< arrayTwo.size() << std::endl;
    
    arrayTwo[8] = "test";
    
    Array <std::string> arrayThree(arrayTwo);
    
    std::cout << "len arrayThree = "<< arrayThree.size() << std::endl;
    std::cout << "value arrayThree[8] = " << arrayThree[8] << std::endl;
    return 0;
}