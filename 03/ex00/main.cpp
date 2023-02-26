#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap none;
	ClapTrap first("first");

	none.attack(first.getName());
	first.takeDamage(none.getAttackDamage());
	first.beRepaired(3);
	for (int i = 0; i < 11; i++)
	{
		first.attack(none.getName());
		none.takeDamage(first.getAttackDamage());
	}
}
