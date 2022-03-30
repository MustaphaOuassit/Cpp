/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:24:04 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/30 21:34:12 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(const std::string type):type(type){}
const std::string &Weapon::getType() const {return this->type;}
void  Weapon::setType(const std::string type){this->type = type;}