/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <mouassit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:18:57 by mouassit          #+#    #+#             */
/*   Updated: 2022/03/22 12:18:59 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if(argc > 1)
	{
		for (size_t i = 1; i < (size_t)argc; i++)
		{
			for (size_t j = 0; j < strlen(argv[i]); j++)
			{
				argv[i][j] = toupper(argv[i][j]);
			}
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	else
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
}