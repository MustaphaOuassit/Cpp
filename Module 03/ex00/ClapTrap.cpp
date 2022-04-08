/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:21:00 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/08 17:56:27 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    this->name = name;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

void attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name << "attacks, causing"
}