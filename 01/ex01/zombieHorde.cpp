#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	std::string temp_name;
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		temp_name = name;
		temp_name += (char)(i + 48);
		zombies[i].setName(temp_name);
	}
	return (zombies);
}
