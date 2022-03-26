/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:21:40 by mouassit          #+#    #+#             */
/*   Updated: 2022/03/26 18:40:47 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int main(){
    std::string cmd;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    while(true){
        std::cout << "phonebook: ";
        std::cin >> cmd;
        if(cmd == "ADD")
        {
            std::cout << "first name: ",
            std::cin >> firstName;
            std::cout << "last name: ",
            std::cin >> lastName;
            std::cout << "nick name: ",
            std::cin >> nickName;
            std::cout << "phone number: ",
            std::cin >> phoneNumber;
            std::cout << "darkest secret: ",
            std::cin >> darkestSecret;
            
            
        }
        else
        {
            std::cout << "command not found" << std::endl;
        }
    }
}