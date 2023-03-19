#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("None")
{
	std::cout << "WrongAnimal deafult constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	this->type = copy.type;
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type << " sounds it's wrong!" << std::endl;
}
