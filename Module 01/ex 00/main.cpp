/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:48:58 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/29 00:15:50 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(){
    Zombie *test;

    test = newZombie("Mustapha");
    randomChump("Mustapha");
    delete test;
}