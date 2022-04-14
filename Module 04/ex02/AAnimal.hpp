/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:12:15 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 14:13:27 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal{
    public:
        AAnimal(void);
        AAnimal(AAnimal const & copy);
        AAnimal(std::string const & type);
        AAnimal &operator=(const AAnimal &inst);
        virtual ~AAnimal(void);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
    protected:
        std::string type;
};

#endif