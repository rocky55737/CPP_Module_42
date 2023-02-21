#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon*	weapon;
	std::string	name;
public:
	HumanB(std::string name_init);
	void	attack(void);
	void	setWeapon(Weapon *new_weapon);
}

#endif