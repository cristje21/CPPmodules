#include <cctype>
#include <cstring>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++) // loop through double array elements
	{
		for (int j = 0; av[i][j] != '\0'; j++) // loop through elements and capitalize
		{
			std::cout << static_cast<char>(std::toupper(av[i][j]));
		}
	}
	std::cout << std::endl;
	return (0);
}