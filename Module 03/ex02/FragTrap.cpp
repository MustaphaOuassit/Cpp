/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:48:45 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/10 18:00:39 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap Default constructor called getName" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->name = name;
}

FragTrap::FragTrap(FragTrap const & value)
{
	*this = value;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &inst)
{
    this->name = inst.name;
    this->hitPoints = inst.hitPoints;
    this->energyPoints = inst.energyPoints;
    this->attackDamage = inst.attackDamage;
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing "<< this->attackDamage << " points of damage!" << std::endl;
        this->hitPoints -= this->attackDamage;
        this->energyPoints--;   
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives." << std::endl;
}