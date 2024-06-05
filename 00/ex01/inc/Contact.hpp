#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

typedef	enum
{
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUMBER,
	DARKEST_SECRET,
}	fields;

class Contact
{
	private:
		std::string	fields[5];
		int			added;
	public:
					Contact();
		void		fillContact();
		void		printFoundFields();
		int			printSearchFields(int index);
};

#endif
