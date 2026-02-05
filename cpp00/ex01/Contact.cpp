#include "PhoneBook.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void add_user(PhoneBook &phonebook, int *i)
{
	std::string input;

	if (*i >= 8)
	{
		*i = *i % 8;
	}
	std::cout << "enter first name: " << std::endl;
	std::cin >> phonebook.contacts[*i].first_name;
	std::cout << "enter last name: " << std::endl;
	std::cin >> phonebook.contacts[*i].last_name;
	std::cout << "enter nickname: " << std::endl;
	std::cin >> phonebook.contacts[*i].nickname;
	std::cout << "enter phone number: " << std::endl;
	std::cin >> phonebook.contacts[*i].phone_number;
	std::cout << "enter darkest secret: " << std::endl;
	std::cin >> phonebook.contacts[*i].darkest_secret;
}

void search_user(PhoneBook &phonebook, int i)
{
	int index;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int j = 0; j < i; j++)
	{
		std::cout << j << " | " << phonebook.contacts[j].first_name << " | " << phonebook.contacts[j].last_name << " | " << phonebook.contacts[j].nickname << std::endl;
	}
	std::cout << "enter index of the contact you want to see: " << std::endl;
	std::cin >> index;
	if (index < i)
	{
		std::cout << "first name: " << phonebook.contacts[index].first_name << std::endl;
		std::cout << "last name: " << phonebook.contacts[index].last_name << std::endl;
		std::cout << "nickname: " << phonebook.contacts[index].nickname << std::endl;
		std::cout << "phone number: " << phonebook.contacts[index].phone_number << std::endl;
		std::cout << "darkest secret: " << phonebook.contacts[index].darkest_secret << std::endl;
	}
}
