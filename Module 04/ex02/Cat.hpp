/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:18:03 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 14:14:48 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
    public:
        Cat(void);
        Cat(Cat const & copy);
        Cat &operator=(const Cat &inst);
        ~Cat(void);
        void makeSound(void) const;
    private:
        Brain* brain;
};

#endif