/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 02:58:16 by mouassit          #+#    #+#             */
/*   Updated: 2022/05/01 04:11:30 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        class iterator
        {
            public:
                T *ptr;
                
                iterator(void){};
                iterator(iterator const & copy){*this = copy;}
                iterator &operator=(const iterator &inst)
                {
                    this->ptr = inst.ptr;
                    return *this;
                }
                ~iterator(void){};
                T &operator*(void)
                {
                    return *this->ptr;
                };
                T &operator++(void)
                {
                    this->ptr++;
                    return *this->ptr;
                }
                T &operator--(void)
                {
                    this->ptr--;
                    return *this->ptr;
                };
                T *operator++(int)
                {
                    T *tmp = this->ptr;
                    this->ptr++;
                    return tmp;
                }
                T *operator--(int)
                {
                    T *tmp = this->ptr;
                    this->ptr--;
                    return tmp;
                }
                bool operator!=(MutantStack::iterator inst)
                {
                    return this->ptr != inst.ptr;  
                }
        };
        MutantStack(void):std::stack<T>(){}
        ~MutantStack(void){}
        MutantStack<T>::iterator begin()
        {
            MutantStack<T>::iterator iterator;
            iterator.ptr = &this->top() - this->size() + 1;
            return iterator;
        }
        MutantStack<T>::iterator end()
        {
            MutantStack<T>::iterator iterator;
            iterator.ptr = &this->top() + 1;
            return iterator;
        }
};
#endif