#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << " is created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap " << name << " is copied." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << " is created." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	name = copy.name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	std::cout << "ScavTrap " << name << " is assigned." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is deleted." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << "  is now in Gate keeper mode." << std::endl;
}