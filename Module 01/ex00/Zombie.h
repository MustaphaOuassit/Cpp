/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:50:20 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/10 10:07:06 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
    public:
        Zombie(std::string name);
        void announce(void);
        ~Zombie(void);
    private:
        std::string name;
};

Zombie* newZombie( std::string name);
void    randomChump( std::string name);
#endif