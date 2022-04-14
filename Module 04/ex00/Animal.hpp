/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:55:55 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 02:28:35 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    public:
        Animal(void);
        Animal(Animal const & copy);
        Animal(std::string const & type);
        Animal &operator=(const Animal &inst);
        virtual ~Animal(void);
        std::string getType(void) const;
        virtual void makeSound(void) const;
    protected:
        std::string type;
};

#endif