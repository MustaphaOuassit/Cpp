/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 03:09:51 by mouassit          #+#    #+#             */
/*   Updated: 2022/04/24 03:11:54 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(PresidentialPardonForm const & copy);
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &inst);
        ~PresidentialPardonForm(void);

        std::string getTarget(void) const;
        void execute(Bureaucrat const & executor) const;
    private:
        std::string const target;
};

#endif