#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int	hit_points;
	int energy_points;
	int attack_damage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& copy);
	virtual ~ClapTrap();
	ClapTrap(const std::string& name_init);
	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	const std::string& getName();
	const int& getHitPoints();
	const int& getEnergyPoints();
	const int& getAttackDamage();
};

#endif