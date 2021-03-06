/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:41:32 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/27 00:36:10 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animales[4] = { new Dog(),new Dog(),new Cat(), new Cat() };
    for(int i = 0; i < 4; i++)
        delete animales[i];
    return 0;
}