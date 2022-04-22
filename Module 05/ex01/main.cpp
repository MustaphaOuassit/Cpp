/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:25:53 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/22 03:23:49 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat testOne("testOne", 150);
    Form testTwo("testTwo", 30, 40);
    
    testOne.signForm(testTwo);
    return (0);
}