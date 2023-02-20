#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie rand_z(name);
	rand_z.announce();
}
