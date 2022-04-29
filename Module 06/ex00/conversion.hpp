/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:38:38 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/29 00:44:53 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>

bool checkCharacter(std::string str);
bool    checkIntiger(std::string str);
bool    checkFloat(std::string str);
bool    checkDouble(std::string str);

void    printCharacter(std::string str);
void    printIntiger(std::string str);
void    printFloat(std::string str);
void    printDouble(std::string str);

#endif