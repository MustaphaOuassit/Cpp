/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:49:05 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/30 21:34:06 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
    public:
        Weapon(const std::string type);
        void  setType(const std::string type);
        const std::string &getType() const;
    private:
        std::string type;
};

#endif