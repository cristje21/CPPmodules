
#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	my_phonebook;
	std::string	prompt;

	while (true)
	{
		std::cout << "myPhoneBook$> ";
		if (!std::getline(std::cin, prompt))
			return (0);
		else if (!prompt.compare("ADD"))
		{
			if (!my_phonebook.add())
				return (0);
		}
		else if (!prompt.compare("SEARCH"))
			my_phonebook.search();
		else if (!prompt.compare("EXIT"))
			break ;
		else if (!prompt.empty())
			std::cout << "Unknown command. Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	return (0);
}
