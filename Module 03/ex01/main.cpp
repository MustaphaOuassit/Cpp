/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:52:46 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/09 03:01:46 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("testOne");
    ClapTrap clap("testTwo");

    scav.attack("tvOne");
    clap.attack("tvTwo");
    
    scav.takeDamage(9);
    clap.takeDamage(10);
    
    scav.beRepaired(15);
    clap.beRepaired(13);
}