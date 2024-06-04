#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	fields[5];
	public:
		void		setField(int field);
		std::string	getField(int field);
};

#endif
