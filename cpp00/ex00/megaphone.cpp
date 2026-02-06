/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merazafi <merazafi@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:17:24 by merazafi          #+#    #+#             */
/*   Updated: 2026/02/06 11:17:25 by merazafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}	
	for (int i = 1; argv[i]; i++)
	{	
		for (int j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
				std::cout << (char)(argv[i][j] - 32);
			else
				std::cout << (char)argv[i][j];
		}
		std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}
