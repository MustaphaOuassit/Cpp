/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:17:17 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/29 17:16:30 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *instance;

    instance = new Zombie[N];
    for(int i = 0; i < N; i++)
        instance[i].getName(name);
    return (instance);

}