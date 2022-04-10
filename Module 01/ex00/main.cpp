/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:48:58 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/10 10:05:03 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(){
    Zombie *test;

    test = newZombie("Mustapha");
    randomChump("Mustapha");
    delete test;
}