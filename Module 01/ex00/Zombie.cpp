/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:51:34 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/29 00:32:40 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name): name(name){
    std::cout << this->name << " Created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " Destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}