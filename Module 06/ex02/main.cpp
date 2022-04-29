/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:46:34 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/29 15:07:13 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "identify.hpp"

Base * generate(void)
{
    int number;

	srand(time(NULL));
	number = rand() % 3;
	if (number == 0)
	{
		std::cout << "Type pointer: A" << std::endl;
		return (new A);
	}
	else if (number == 1)
	{
		std::cout << "Type pointer: B" << std::endl;
		return (new B);
	}
	std::cout << "Type pointer: C" << std::endl;
	return (new C);
}

int main()
{
    Base *ptr = generate();
    Base &ref = *ptr;
    
    identify(ptr);
    identify(ref);

    delete ptr;

    return (0);
    
}