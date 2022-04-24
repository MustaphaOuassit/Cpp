/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:27:47 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 18:43:08 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <fstream>
class Intern
{
    public:
        Intern(void);
        Intern(Intern const & copy);
        Intern &operator=(const Intern &inst);
        ~Intern(void);

        AForm *makeForm(const std::string &form, const std::string &target);
};

#endif