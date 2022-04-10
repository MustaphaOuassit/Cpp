/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:49:27 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/10 11:08:57 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("testOne");
    ClapTrap clap("testTwo");

    frag.attack("tvOne");
    clap.attack("tvTwo");
    
    frag.takeDamage(9);
    clap.takeDamage(10);
    
    frag.beRepaired(15);
    clap.beRepaired(13);
}
