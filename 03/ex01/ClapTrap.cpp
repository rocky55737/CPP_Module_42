#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("None"), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : name(copy.name), hit_point(copy.hit_point), energy_points(copy.energy_points), attack_damage(copy.attack_damage)
{
	std::cout << "ClapTrap " << name << " is copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	name = copy.name;
	hit_point = copy.hit_point;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	std::cout << "ClapTrap " << name << " is assigned." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is deleted." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name_init) : name(name_init), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " is created." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	if (!energy_points)
	{
		std::cout << "ClapTrap " << name << " can't complete this work!" << std::endl;
		return ;
	}
	energy_points--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	hit_point -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " of damage, so " << hit_point << " is left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " was crushed!" << std::endl;
		return ;
	}
	if (!energy_points)
	{
		std::cout << "ClapTrap " << name << " can't complete this work!" << std::endl;
		return ;
	}
	energy_points--;
	hit_point += amount;
	std::cout << "ClapTrap " << name << " repairs " << amount << ", so " << hit_point << " is left." << std::endl;
}

const std::string& ClapTrap::getName()
{
	return (name);
}

const int& ClapTrap::getHitPoints()
{
	return (hit_point);
}


const int& ClapTrap::getEnergyPoints()
{
	return (energy_points);
}

const int& ClapTrap::getAttackDamage()
{
	return (attack_damage);
}