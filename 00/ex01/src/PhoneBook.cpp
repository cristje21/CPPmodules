#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
};

void	PhoneBook::add_contact()
{
	std::cout << "Firstname: ";
	contacts[index].setField(FIRST_NAME);
	std::cout << "Lastname: ";
	contacts[index].setField(LAST_NAME);
	std::cout << "Nickname: ";
	contacts[index].setField(NICK_NAME);
	std::cout << "Phonenumber: ";
	contacts[index].setField(PHONE_NUMBER);
	std::cout << "Darkest secret: ";
	contacts[index].setField(DARKEST_SECRET);
	index++;
	if (index == 8)
		index = 0;
};

void	PhoneBook::search()
{
	std::string x;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			x = contacts[i].getField(j);
			if (j != 3)
				std::cout << '|';
		}
	}
	// in a loop
	// get a contact display first 4 in format given
	// add a newline and increment
	// at the end ask for an index

};
