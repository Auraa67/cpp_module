#include "PhoneBook.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void truncate_str(std::string &str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
}

void add_user(PhoneBook &phonebook, int *i)
{
	std::string	input;

	if (*i >= 8)
	{
		std::cout << "enter first name: " << std::endl;
		std::cin >> phonebook.contacts[(*i % 8)].first_name;
		truncate_str(phonebook.contacts[(*i % 8)].first_name);
		std::cout << "enter last name: " << std::endl;
		std::cin >> phonebook.contacts[(*i % 8)].last_name;
		truncate_str(phonebook.contacts[(*i % 8)].last_name);
		std::cout << "enter nickname: " << std::endl;
		std::cin >> phonebook.contacts[(*i % 8)].nickname;
		truncate_str(phonebook.contacts[(*i % 8)].nickname);
		std::cout << "enter phone number: " << std::endl;
		std::cin >> phonebook.contacts[(*i % 8)].phone_number;
		std::cout << "enter darkest secret: " << std::endl;
		std::cin >> phonebook.contacts[(*i % 8)].darkest_secret;
		truncate_str(phonebook.contacts[(*i % 8)].darkest_secret);
	}
	else
	{
		std::cout << "enter first name: " << std::endl;
		std::cin >> phonebook.contacts[*i].first_name;
		truncate_str(phonebook.contacts[*i].first_name);
		std::cout << "enter last name: " << std::endl;
		std::cin >> phonebook.contacts[*i].last_name;
		truncate_str(phonebook.contacts[*i].last_name);
		std::cout << "enter nickname: " << std::endl;
		std::cin >> phonebook.contacts[*i].nickname;
		truncate_str(phonebook.contacts[*i].nickname);
		std::cout << "enter phone number: " << std::endl;
		std::cin >> phonebook.contacts[*i].phone_number;
		std::cout << "enter darkest secret: " << std::endl;
		std::cin >> phonebook.contacts[*i].darkest_secret;
		truncate_str(phonebook.contacts[*i].darkest_secret);
	}
}

int	verify_str_type(std::string str)
{
	int	i = 0;
	int	signs = 0;

	while (str[i] && isspace(str[i]))
		i++;
	while (str[i] && (str[i] == '-' | str[i] == '+'))
	{
		i++;
		signs++;
	}
	if (signs > 1)
	{
		return (0);
	}
	for (size_t j = i; j < str.length(); j++)
	{
		if (!isdigit(str[j]))
			return (0);
	}
	return (1);
}

void search_user(PhoneBook &phonebook)
{
	std::string str;
	int			index = 0;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int j = 0; j < 8; j++)
	{
		std::cout << j << " | " << phonebook.contacts[j].first_name << "| " << phonebook.contacts[j].last_name << "| " << phonebook.contacts[j].nickname << std::endl;
	}
	std::cout << "enter index of the contact you want to see: " << std::endl;
	std::cin >> str;
	if (!verify_str_type(str))
	{
		std::cout << "error: index must be a number and a valid number" << std::endl;
		return ;
	}
	index = atoi(str.c_str());
	if (index < 0)
	{
		std::cout << "error: index out of range" << std::endl;
		return ;
	}
	std::cout << index << "| " << phonebook.contacts[index].first_name << "| " << phonebook.contacts[index].last_name << "| " << phonebook.contacts[index].nickname << std::endl;
}
