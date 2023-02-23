#include "HumanB.hpp"

HumanB::HumanB(std::string name_init) : name(name_init), weapon(0)
{}
void	HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " attacks with their punch" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}