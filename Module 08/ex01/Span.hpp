/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:03:03 by mouassit          #+#    #+#             */
/*   Updated: 2022/05/01 01:49:50 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
    public:
        Span(void);
        Span(Span const & copy);
        Span &operator=(const Span &inst);
        Span(unsigned int N);
        ~Span(void);
        
        void    addNumber(int number);
        void    addNumber(int *array, int length);
        int     shortestSpan(void);
        int     longestSpan(void);

    private:
        unsigned int N;
        unsigned int length;
        std::vector<int> vector;
};

#endif

