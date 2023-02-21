#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name_init, Weapon& weapon_ref) : name(name_init) weapon(weapon_ref)
{}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon& new_weapon)
{
	this->weapon = new_weapon;
}