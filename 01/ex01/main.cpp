#include "Zombie.hpp"

int main(void)
{
	int	num_of_zoms;
	Zombie *zombies;

	num_of_zoms = 5;
	zombies = zombieHorde(num_of_zoms, "zom");
	for (int i = 0; i < num_of_zoms; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
