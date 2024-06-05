
#include "Contact.hpp"

Contact::Contact()
{
	added = 0;
}

void Contact::fillContact(void)
{
	std::cout << "First name: ";
	std::getline(std::cin, fields[FIRST_NAME]);
	std::cout << "Last name: ";
	std::getline(std::cin, fields[LAST_NAME]);
	std::cout << "Nick name: ";
	std::getline(std::cin, fields[NICK_NAME]);
	std::cout << "Phone number: ";
	std::getline(std::cin, fields[PHONE_NUMBER]);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, fields[DARKEST_SECRET]);
	std::cout << "Contact has been added succesfully" << std::endl;
	added = 1;
};

void Contact::printFoundFields(void)
{
	if (added == 0)
	{
		std::cout << "This contact does not yet exist. Use ADD to add contact" << std::endl;
		return ;
	}
	for (int i = 0; i < 5; i++)
		std::cout << fields[i] << std::endl;
};

int Contact::printSearchFields(int index)
{
	std::string entry;

	if (added == 0)
	{
		if (index == 0)
			std::cout << "No contacts have been added yet" << std::endl;
		return (1);
	}
	std::cout << index << ": ";
	for (int i = 0; i < 4; i++)
	{
		entry = fields[i].substr(0, 9);
		std::cout << entry;
		for (int leftover = 9 - entry.length(); leftover > 0; leftover--)
			std::cout << '.';
		if (i != 3)
			std::cout << '|';
	}
	std::cout << std::endl;
	return (0);
};
