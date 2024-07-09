#include <cctype>
#include <cstring>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string	str(av[i]);
		for (std::string::iterator it = str.begin(); it != str.end(); it++)
			std::cout << static_cast<unsigned char>(std::toupper(*it));
	}
	std::cout << std::endl;
	return (0);
}
