#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
private:
	std::string	name;
public:
	Zombie(std::string zombie_name);
	~Zombie();
	std::string getName(void);
	void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif