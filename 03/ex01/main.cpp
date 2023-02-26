#include "ScavTrap.hpp"

int main() {
	ClapTrap ct("a");
	ScavTrap st1;
	ScavTrap st2("b");
	ScavTrap st3(st2);
	ScavTrap st4;

	st4 = st2;

	ct.attack(st1.getName());
	st1.takeDamage(ct.getAttackDamage());
	st1.beRepaired(20);
	for (int i = 0; i < 6; i++)
	{
		st1.attack(st2.getName());
		st2.takeDamage(st1.getAttackDamage());
	}
	st3.beRepaired(10);
	st4.beRepaired(30);
	st3.guardGate();
	return (0);
}
