#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& rhs);
	ScavTrap(const std::string& name);
	ScavTrap& operator=(const ScavTrap& rhs);
	virtual ~ScavTrap();
	void guardGate();
}

#endif 