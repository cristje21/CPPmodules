
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

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