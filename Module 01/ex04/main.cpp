/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:25:40 by mustapha          #+#    #+#             */
/*   Updated: 2022/03/31 19:30:27 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        std::ifstream openFile(argv[1]);
        std::string input;
        std::string str1 = argv[2];
        std::string str2 = argv[3];
        if(str1.empty() || str2.empty())
        {
            std::cout << "Error: String empty." << std::endl;
            return 1;
        }
        if(openFile.is_open())
        {
            std::ofstream createFile(std::string (argv[1]) + ".replace");
            if(openFile.peek() == EOF)
            {
                std::cout << "Error: File empty." << std::endl;
                return 1;
            }
            createFile.is_open();
            while (std::getline(openFile, input))
            {
                if(str1 != str2)
                {
                    for(size_t index = 0; (index = input.find(str1)) != std::string::npos; index++)
                        input = input.erase(index,str1.length()).insert(index,str2);   
                }
                createFile << input;
                if(openFile.peek() == EOF)
                    break;
                createFile << std::endl;
            }
        }
        else
        {
            std::cout << "Error: Open file." << std::endl;
            return 1; 
        }
    }
    else
    {
        std::cout << "Error: Arguments." << std::endl;
        return 1;
    }
    return 0;
}