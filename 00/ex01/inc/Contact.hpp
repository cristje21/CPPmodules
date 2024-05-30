#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.h"

class Contact
{
	private:
		std::string	fields[5];
	public:
		void		setField(int field);
		std::string	getField(int field);
};

#endif
