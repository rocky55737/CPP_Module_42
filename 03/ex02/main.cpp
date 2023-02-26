#include "FragTrap.hpp"

int main() {
	ClapTrap ct("a");
	FragTrap ft1;
	FragTrap ft2("b");
	FragTrap ft3(ft2);
	FragTrap ft4;

	ft4 = ft2;

	ct.attack(ft1.getName());
	ft1.takeDamage(ct.getAttackDamage());
	ft1.beRepaired(20);
	for (int i = 0; i < 6; i++)
	{
		ft1.attack(ft2.getName());
		ft2.takeDamage(ft1.getAttackDamage());
	}
	ft3.beRepaired(10);
	ft4.beRepaired(30);
	ft3.highFivesGuys();
	return (0);
}