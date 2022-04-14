/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:45:56 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/14 13:29:46 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    public:
        Brain(void);
        Brain(Brain const & copy);
        Brain(std::string const & type);
        Brain &operator=(const Brain &inst);
        ~Brain(void);
    private:
        std::string ideas[100];
};

#endif