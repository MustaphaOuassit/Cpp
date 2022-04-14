/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:56:51 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 13:29:35 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Constractor called" << std::endl;
}

Brain::Brain(Brain const & copy)
{
    *this = copy;
    std::cout << "Brain Copy Constractor called" << std::endl;
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