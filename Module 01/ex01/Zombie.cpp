/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:28:50 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/29 17:17:37 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(void)
{
	std::cout << "Zombie Created" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " Destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::getName(std::string name)
{
    this->name = name;
}