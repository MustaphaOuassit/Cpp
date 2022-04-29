/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:46:30 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/29 13:46:53 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "actual type: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "actual type: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "actual type: C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "actual type: A" << std::endl;
		return ;
	}
	catch (std::bad_cast& e) {
	}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "actual type: B" << std::endl;
		return ;
	}
	catch (std::bad_cast& e) {
	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "actual type: C" << std::endl;
	}
	catch (std::bad_cast& e) {
	}
}