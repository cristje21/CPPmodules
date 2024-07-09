#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <stdbool.h>
# include <string>

typedef	enum
{
	INDEX,
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUMBER,
	DARKEST_SECRET,
	NUMBER_OF_FIELDS,
}	fields;

typedef	enum
{
	SEARCH,
	FOUND,
}	print;

class Contact
{
	private:

	std::string	fields[NUMBER_OF_FIELDS];
	bool		get_field(std::string field, int index);
	bool		added;

	public:

				Contact();
	void		print(bool action);
	bool		add(int index);
	
};

#endif
