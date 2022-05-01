/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:02:59 by mouassit          #+#    #+#             */
/*   Updated: 2022/05/01 02:47:39 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
    this->length = 0;
}

Span::Span(Span const & copy)
{
    *this = copy;
}

Span& Span::operator=(const Span &inst)
{
    this->N = inst.N;
    this->length = inst.length;
    return *this;
}

Span::Span(unsigned int N)
{
    this->N = N;
    this->length = 0;
}

Span::~Span(){};

void    Span::addNumber(int number)
{
    if (this->length == this->N)
        throw "Error: max number";
    this->vector.push_back(number);
    this->length++;
}

void    Span::addNumber(int *array, int length)
{
    if (this->length + length > this->N)
        throw "Error: max number";
    this->vector.insert(this->vector.begin(),array,array + length);
    this->length += length; 
}

int     Span::shortestSpan()
{
    int min;
    
    if (this->length < 2)
        throw "min two elements";
    std::sort(this->vector.begin(), this->vector.end());
    min = abs(this->vector[0] - this->vector[1]);
    for (unsigned int i = 0; i < (this->length - 1); i++)
    {
        if (abs(this->vector[i] - this->vector[i + 1]) < min)
            min = abs(this->vector[i] - this->vector[i + 1]);
    }
    return min;
}

int     Span::longestSpan()
{
    int max;
    
    if (this->length < 2)
        throw "min two elements";
    std::sort(this->vector.begin(), this->vector.end());
    max = abs(this->vector[0] - this->vector[this->length - 1]);
    return max;
}