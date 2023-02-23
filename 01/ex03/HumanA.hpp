#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	Weapon&	weapon;
	std::string	name;
public:
	HumanA(std::string name_init, Weapon& weapon_ref);
	void	attack(void);
	void	setWeapon(Weapon& new_weapon);
};

#endif