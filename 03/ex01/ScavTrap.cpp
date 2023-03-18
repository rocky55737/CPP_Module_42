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

void ScavTrap::attack(const std::string& target)
{
	if (hit_points <= 0)
	{
		std::cout << "ScavTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	if (!energy_points)
	{
		std::cout << "ScavTrap " << name << " can't complete this work!" << std::endl;
		return ;
	}
	energy_points--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "ScavTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	hit_points -= amount;
	std::cout << "ScavTrap " << name << " takes " << amount << " of damage, so " << hit_points << " is left." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "ScavTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	if (!energy_points)
	{
		std::cout << "ScavTrap " << name << " can't complete this work!" << std::endl;
		return ;
	}
	energy_points--;
	hit_points += amount;
	std::cout << "ScavTrap " << name << " repairs " << amount << ", so " << hit_points << " is left." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << "  is now in Gate keeper mode." << std::endl;
}