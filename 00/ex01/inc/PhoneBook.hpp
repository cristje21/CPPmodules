#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>

class	PhoneBook
{
	private:
	Contact	contacts[8];
	int		index;
	public:
			PhoneBook();
	void	add_contact();
};

#endif