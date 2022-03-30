/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:10:45 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/29 17:24:10 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie *test;

    test = zombieHorde(5,"mustapha");
    for(int i = 0; i < 5; i++)
        test[i].announce();
    delete [] test;
}