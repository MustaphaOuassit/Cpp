/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:13:07 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 14:14:54 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
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