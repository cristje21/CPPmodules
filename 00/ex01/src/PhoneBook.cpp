#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "phonebook.h"

PhoneBook::PhoneBook()
{
	index = 0;
};

void	add_contact()
{
	Contact contact;

	std::cin >> contact.fields[FIRST_NAME];
};
