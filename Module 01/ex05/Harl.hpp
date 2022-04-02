/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:43:02 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/02 14:03:04 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:
        Harl();
        std::string levels[4];
        void complain( std::string level);
    private:
        void (Harl::*ptrFun[4])(void);
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif