#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		Contact	contacts[8];
		~PhoneBook();
};

void	add_user(PhoneBook &phonebook, int *i);
void	search_user(PhoneBook &phonebook);

#endif