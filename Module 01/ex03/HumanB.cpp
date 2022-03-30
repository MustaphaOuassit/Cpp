/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:40:52 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/30 21:25:56 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name): name(name),weapon(NULL){}

void HumanB::setWeapon(Weapon &weapon)
{ 
    this->weapon = &weapon; 
}

void    HumanB::attack(){
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}