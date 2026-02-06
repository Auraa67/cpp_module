/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merazafi <merazafi@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:17:04 by merazafi          #+#    #+#             */
/*   Updated: 2026/02/06 11:17:07 by merazafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	action;
	int			i = 0;

	while (1)
	{
		std::cout << "enter an action ADD, SEARCH OR EXIT: " << std::endl;
		std::cin >> action;
		if (action == "ADD") {
			add_user(phonebook, &i);
			i++;
		}
		else if (action == "SEARCH") {
			search_user(phonebook);
		}
		else if(action == "EXIT") {
			break ;
		}
	}
	return 0;
}
