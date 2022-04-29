/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:41:47 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/29 00:44:00 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void    printCharacter(std::string str)
{
    std::cout << "char: " << str << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << "impossible" << std::endl;
}

void    printIntiger(std::string str)
{
    int number = std::stoi(str);
    
    if (number >= 0 && number <= 127)
    {
        if (number >= 33 && number <= 126)
            std::cout << "char: " << "'" << static_cast<char>(number) << "'" << std::endl;   
        else
            std::cout << "char: " << "non displayable" << std::endl;
    }
    else
        std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << number << std::endl;
    std::cout << "float: " << number << ".0f" << std::endl;
    std::cout << "double: " << number << ".0" << std::endl;
}

void    printFloat(std::string str)
{
    if (str == "nanf" || str == "inff" || str == "-inff")
    {
        str.pop_back();
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return;
    }
    float number = std::stof(str);
    
    if (number >= 0 && number <= 127)
    {
        if (number >= 33 && number <= 126)
            std::cout << "char: " << "'" << static_cast<char>(number) << "'" << std::endl;   
        else
            std::cout << "char: " << "non displayable" << std::endl;
    }
    else
        std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(number)<< std::endl;
    std::cout << "float: " << number << ".0f" << std::endl;
    std::cout << "double: " << number << ".0" << std::endl;
}

void    printDouble(std::string str)
{
    if (str == "nan" || str == "inf" || str == "-inf")
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return;
    }
    double number = std::stod(str);
    
    if (number >= 0 && number <= 127)
    {
        if (number >= 33 && number <= 126)
            std::cout << "char: " << "'" << static_cast<char>(number) << "'" << std::endl;   
        else
            std::cout << "char: " << "non displayable" << std::endl;
    }
    else
        std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(number) << std::endl;
    std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
    std::cout << "double: " << number << ".0" << std::endl;
}