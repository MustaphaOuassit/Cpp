/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:21:00 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/14 00:03:14 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Default constructor called getName" << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    this->name = name;
}

ClapTrap::ClapTrap(ClapTrap const & value)
{
	*this = value;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &inst) {
    this->name = inst.name;
    this->hitPoints = inst.hitPoints;
    this->energyPoints = inst.energyPoints;
    this->attackDamage = inst.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "<< this->attackDamage << " points of damage!" << std::endl;
        this->hitPoints -= this->attackDamage;
        this->energyPoints--;   
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
        this->attackDamage = amount;   
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " repaire " << amount << " hit points back." << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;   
    }
}