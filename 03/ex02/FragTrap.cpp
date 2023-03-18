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
	std::cout << "FragTrap " << name << " is copied." << std::endl;
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

void FragTrap::attack(const std::string& target)
{
	if (hit_points <= 0)
	{
		std::cout << "FragTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	if (!energy_points)
	{
		std::cout << "FragTrap " << name << " can't complete this work!" << std::endl;
		return ;
	}
	energy_points--;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "FragTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	hit_points -= amount;
	std::cout << "FragTrap " << name << " takes " << amount << " of damage, so " << hit_points << " is left." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "FragTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	if (!energy_points)
	{
		std::cout << "FragTrap " << name << " can't complete this work!" << std::endl;
		return ;
	}
	energy_points--;
	hit_points += amount;
	std::cout << "FragTrap " << name << " repairs " << amount << ", so " << hit_points << " is left." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " HIGH FIVES GUYS." << std::endl;
}