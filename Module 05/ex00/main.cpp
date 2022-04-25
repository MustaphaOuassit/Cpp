/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:56:58 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 05:03:34 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main() 
{
	Bureaucrat test("test", 150);
	try 
	{
        test.decrementBureaucrat();
    }
	catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
	try
	{
		test.decrementBureaucrat();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
    return (0);
}