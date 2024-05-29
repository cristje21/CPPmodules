#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.h"

class Contact
{
	private:
		std::string	fields[5];

	public:
		void		setField(int field);
		void		getField(int field);
};

#endif
