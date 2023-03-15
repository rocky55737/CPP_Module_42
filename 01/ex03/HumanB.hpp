#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	std::string	name;
	Weapon*	weapon;
public:
	HumanB(std::string name_init);
	void	attack(void);
	void	setWeapon(Weapon &new_weapon);
};

#endif