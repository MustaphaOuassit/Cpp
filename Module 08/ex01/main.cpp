/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:01:48 by mouassit          #+#    #+#             */
/*   Updated: 2022/05/01 02:47:55 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    int array[3] = {1,2,3};
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try{
        sp.addNumber(array, 3);
        std::cout<< sp.shortestSpan();
        std::cout << sp.longestSpan();
    }

    catch (char const *e){
        std::cout << e << std::endl;
    }
    return (0);
}