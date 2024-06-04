
#include "Contact.hpp"

std::string Contact::getField(int index)
{
	return (fields[index]);
};

void Contact::setField(int index)
{
	std::cin >> fields[index];
};
