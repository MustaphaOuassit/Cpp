/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:19:18 by mustapha          #+#    #+#             */
/*   Updated: 2022/04/29 09:46:17 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    int a;
    int b;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*  deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data * data = new Data;
    data->a = 13;
    data->b = 37;
    uintptr_t raw;

    std::cout << "a : " << data->a << " " << "b: " << data->b << std::endl;

    raw = serialize(data);
    data = deserialize(raw);

    std::cout << "a : " << data->a << " " << "b: " << data->b << std::endl;
	return (0);
}