/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:24:39 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 01:26:43 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(RobotomyRequestForm const & copy);
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &inst);
        ~RobotomyRequestForm(void);

        std::string getTarget(void) const;
        void execute(Bureaucrat const & executor) const;
    private:
        std::string const target;
};

#endif