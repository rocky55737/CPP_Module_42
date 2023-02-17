#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name) : name(zombie_name)
{}

Zombie::~Zombie()
{
	std::cout << this->getName() << "is dead" << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	return (z);
}

void	randomChump(std::string name)
{
	Zombie rand_z(name);
	rand_z.announce();
}
