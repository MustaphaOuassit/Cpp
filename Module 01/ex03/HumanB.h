/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:33:56 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/30 21:20:54 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB{
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        std::string name;
        Weapon *weapon;
        void attack();
};

#endif