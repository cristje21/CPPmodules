
#include "Contact.hpp"
#include <iostream>
#include <sstream>

Contact::Contact() { added = 0; };

bool	Contact::get_field(std::string field, int index)
{
	std::string input;

	while (input.empty())
	{
		std::cout << field;
		if (!std::getline(std::cin, input))
			return (false) ;
	}
	fields[index] = input;
	return (true);
};

void	Contact::print(bool action)
{
	size_t	n;

	if (action == FOUND)
	{
		for (int i = 1; i < NUMBER_OF_FIELDS; i++)
			std::cout << fields[i] << std::endl;
		return ;
	}
	for (int i = 0; i < PHONE_NUMBER; i++)
	{
		n = fields[i].length();
		if (n > 9)
			n = 9;
		std::cout.write(fields[i].data(), n);
		for (; n < 10; n++)
			std::cout << '.';
		if (i == NICK_NAME)
			break ;
		std::cout << '|';
	}
	std::cout << std::endl;
}

bool Contact::add(int index)
{
	std::stringstream ss;

	ss << index;
	fields[INDEX] = ss.str();
	if (!get_field("First name: ", FIRST_NAME) || \
		!get_field("Last name: ", LAST_NAME) || \
		!get_field("Nick name: ", NICK_NAME) || \
		!get_field("Phone number: ", PHONE_NUMBER) || \
		!get_field("Darkest secret: ", DARKEST_SECRET))
		return (false);
	std::cout << "Contact has been added succesfully." << std::endl;
	added = 1;
	return (true);
};
