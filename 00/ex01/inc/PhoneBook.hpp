
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <stdbool.h>
# include "Contact.hpp"

# define MAX_CONTACTS 8

class	PhoneBook
{
	private:

	int		search_options();
	
	Contact	contacts[MAX_CONTACTS];
	int		index;
	int		amount;

	public:

			PhoneBook();
	bool	add();
	void	search();

};

#endif
