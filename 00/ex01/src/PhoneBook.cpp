#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
};

void	PhoneBook::add_contact()
{
	contacts[index].fillContact();
	if (index == 7)
		index = 0;
	else
		index++;
};

void	PhoneBook::search()
{
	int	index;

	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].printSearchFields(i))
			return ;
	}
	std::cout << "enter index: ";
	std::cin >> index;
	if (index >= 0 && index <= 7)
		contacts[index].printFoundFields();
	else
		std::cout << "index out of reach" << std::endl;
};
