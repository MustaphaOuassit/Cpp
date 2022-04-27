/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:56:51 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/27 00:25:41 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const & copy)
{
    *this = copy;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &inst) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = inst.ideas[i];
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}