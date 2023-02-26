#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
{
	this->hit_point = 100;
	
}

ScavTrap::ScavTrap(const ScavTrap& rhs);
ScavTrap::ScavTrap(const std::string& name);
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs);
virtual ScavTrap::~ScavTrap();
void ScavTrap::guardGate();