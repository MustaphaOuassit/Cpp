/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:35:53 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/29 00:40:00 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

bool checkCharacter(std::string str)
{
    if (str.length() == 1 && !isdigit(str[0]))
        return true;
    return false;
}

bool    checkIntiger(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if(i == 0 && str[0] == '-')
            continue ;
        if (!isdigit(str[i]))
            return false;
    }
    try {
        std::stoi(str);
        return true;
    }
    catch (std::exception &e)
    {
        return false;
    }
}

bool    checkFloat(std::string str)
{
    if (str[str.length() - 1] != 'f')
        return false;
    if (str == "nanf" || str == "inff" || str == "-inff")
        return true;
    str.pop_back();
    for (size_t i = 0; i < str.length(); i++)
    {
        if(i == 0 && str[0] == '-')
            continue ;
        if (!isdigit(str[i]) && str[i] != '.')
            return false;
    }
    try {
        std::stof(str);
        return true;
    }
    catch (std::exception &e)
    {
        return false;
    }
}

bool    checkDouble(std::string str)
{
    if (str == "nan" || str == "inf" || str == "-inf")
        return true;
    for (size_t i = 0; i < str.length(); i++)
    {
        if(i == 0 && str[0] == '-')
            continue ;
        if (!isdigit(str[i]) && str[i] != '.')
            return false;
    }
    try {
        std::stod(str);
        return true;
    }
    catch (std::exception &e)
    {
        return false;
    }
}