#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& copy);
	ScavTrap(const std::string& name);
	ScavTrap& operator=(const ScavTrap& copy);
	virtual ~ScavTrap();
	void guardGate();
};

#endif