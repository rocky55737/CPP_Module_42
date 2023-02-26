#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
public:
	FragTrap();
	FragTrap(const FragTrap& copy);
	FragTrap(const std::string& name);
	FragTrap& operator=(const FragTrap& copy);
	virtual ~FragTrap();
	void highFivesGuys(void);
};


#endif