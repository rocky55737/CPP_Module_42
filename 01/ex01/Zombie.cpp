#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() : name("")
{}

Zombie::Zombie(std::string zombie_name) : name(zombie_name)
{}

Zombie::~Zombie()
{
	std::cout << this->getName() << " is dead" << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
