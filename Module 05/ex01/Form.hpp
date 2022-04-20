/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:26:44 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/20 23:23:27 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
    public:
        Form(void);
        Form(Form const & copy);
        //Form &operator=(const Form &inst);
        ~Form(void);
    private:
        std::string name;
        bool isSigned;
        int signGrade;
        int executeGrade;
};

#endif