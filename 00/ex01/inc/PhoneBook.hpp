
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

typedef	enum
{
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUMBER,
	DARKEST_SECRET,
}	fields;

class	PhoneBook
{
	private:
	Contact	contacts[8];
	int		index;
	public:
			PhoneBook();
	void	add_contact();
	void	search();
};

#endif