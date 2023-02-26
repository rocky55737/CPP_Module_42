#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << name << " is created." << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap " << name << " is copied." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << name << " is created." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	name = copy.name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	std::cout << "FragTrap " << name << " is assigned." << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is deleted." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " HIGH FIVES GUYS." << std::endl;
}