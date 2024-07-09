
#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

PhoneBook::PhoneBook()
{
	index = 0;
	amount = 0;
};

bool	PhoneBook::add(void)
{
	if (!contacts[index].add(index))
		return (false);
	amount = amount + 1 - (amount == MAX_CONTACTS);
	index = (index + 1) % MAX_CONTACTS;
	return (true);
};

int		PhoneBook::search_options(void)
{
	for (int i = 0; i < amount; i++)
		contacts[i].print(SEARCH);
	if (!amount)
		std::cout << "No contacts have been added yet" << std::endl;
	return (amount);
}

void	PhoneBook::search(void)
{
	int	index;

	if (!search_options())
		return ;
	std::cout << "Select index: ";
	std::cin >> index;
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cout << "Error: invalid index" << std::endl;
	}
	else
	{
		if (index >= 0 && index < amount)
			contacts[index].print(FOUND);
		else
			std::cout << "index out of range" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
};
