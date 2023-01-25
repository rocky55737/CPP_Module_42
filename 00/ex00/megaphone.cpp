#include <iostream>

int	main(int ac, char **av)
{
	int	c;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		ac = 1;
		while (av[ac])
		{
			c = 0;
			while (av[ac][c])
			{
				av[ac][c] = toupper(av[ac][c]);
				c++;
			}
			ac++;
		}
	}
	std::cout << std::endl;
	return (0);
}