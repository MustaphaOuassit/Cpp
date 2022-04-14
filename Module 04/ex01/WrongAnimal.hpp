/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:37:40 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 02:35:24 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const & copy);
        WrongAnimal(std::string const & type);
        WrongAnimal &operator=(const WrongAnimal &inst);
        ~WrongAnimal(void);
        std::string getType(void) const;
        virtual void makeSound(void) const;
    protected:
        std::string type;
};

#endif