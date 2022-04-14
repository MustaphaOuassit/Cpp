/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:13:07 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 13:00:02 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public:
        Dog(void);
        Dog(Dog const & copy);
        Dog &operator=(const Dog &inst);
        ~Dog(void);
        void makeSound(void) const;
    private:
        Brain* brain;
};

#endif