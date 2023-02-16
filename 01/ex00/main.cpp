#include "Zombie.hpp"

int	main(void)
{
	Zombie *zom = newZombie("aaaa");
	zom->announce();
	randomChump("bbb");
	delete zom;
	return (0);
}