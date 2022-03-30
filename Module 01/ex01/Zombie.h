/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:10:59 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/29 17:09:29 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
    public:
        Zombie(void);
        void    announce(void);
        void    getName(std::string name);
        ~Zombie(void);
    private:
        std::string name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif