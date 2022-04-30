/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:25:42 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/30 14:51:27 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array{
    public:
        Array(void)
        {
            this->array = new T[0];
            this->len = 0;
            
        }
        Array(unsigned int n)
        {
            this->array = new T[n];
            this->len = n;
        }
        Array(const Array<T> &copy)
        {
            *this = copy;
        }
        unsigned int size() const
        {
            return (this->len);
        }

        Array &operator=(const Array<T> &inst)
        {
            this->len = inst.size();
            if (this->len > 0)
                this->array = new T[this->len];
            
            for (unsigned int i = 0; i < this->len; i++)
                this->array[i] = inst.array[i];
            return (*this); 
        }
        
        T &operator[](unsigned int index)
        {
            if (index < 0 || index >= this->len)
                throw std::exception();
            return (this->array[index]);
        }
        ~Array(void)
        {
            delete [] this->array;
        }
    private:
        T *array;
        unsigned int len;
};

#endif