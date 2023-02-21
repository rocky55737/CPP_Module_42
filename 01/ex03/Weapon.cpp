#include "Weapon.hpp"

Weapon::Weapon(const std::string& init_type) : type(init_type) {};

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(const std::string& type)
{
	this->type = type;
}
