#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	my_phonebook;
	std::string	prompt;

	while (1)
	{
		std::cin >> prompt;
		if (!prompt.compare("ADD"))
		{
			my_phonebook.add_contact();
		}
		else if (!prompt.compare("SEARCH"))
		{
			std::cout << "is searching: " << std::endl;
		}
		else if (!prompt.compare("EXIT"))
			break ;
	}
	return (0);
}