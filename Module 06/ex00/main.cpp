/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:31:27 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/29 00:52:39 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error : Arguments" << std::endl;
        return 1;
    }
    if (checkCharacter(argv[1]))
        printCharacter(argv[1]);
    else if (checkIntiger(argv[1]))
        printIntiger(argv[1]);
    else if (checkFloat(argv[1]))
        printFloat(argv[1]); 
    else if (checkDouble(argv[1]))
        printDouble(argv[1]);
    else
        std::cout << "impossible" << std::endl;
    return (0);
}