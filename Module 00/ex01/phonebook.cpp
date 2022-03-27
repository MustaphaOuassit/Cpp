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

void    printUser(std::string str)
{
    std::string table[9];
    if(str.length() > 10)
    {
        str[9] = '.';
        for(int i = 0; i < 10; i++)
            std::cout << str[i];
    }
    else
        std::cout << str;
}

int main(){
    int i;
    PhoneBook user;
    Contacts contact;
    std::string cmd;
    i = 0;
    while(true){
        std::cout << "phonebook: ";
        std::cin >> cmd;
        if(cmd == "ADD")
        {
            std::cout << "first name: ";
            std::cin >> contact.firstName;
            std::cout << "last name: ";
            std::cin >> contact.lastName;
            std::cout << "nick name: ";
            std::cin >> contact.nickName;
            std::cout << "phone number: ";
            std::cin >> contact.phoneNumber;
            std::cout << "darkest secret: ";
            std::cin >> contact.darkestSecret;
            if(i >= 8)
                user.contact[7] = contact;
            else
                user.contact[i] = contact;
            i++;
        }
        else if(cmd == "SEARCH")
        {
            for(int i = 0; i < 8; i++)
            {
                if(user.contact[i].firstName.length())
                {
                    std::cout << " " << i;
                    std::cout << "|";
                    printUser(user.contact[i].firstName);
                    std::cout << "|";
                    printUser(user.contact[i].lastName);
                    std::cout << "|";
                    printUser(user.contact[i].nickName);
                    std::cout << std::endl;
                }
            }
        }
        else if(cmd == "EXIT")
            exit(0);
        else
            std::cout << "command not found" << std::endl;
    }
}