#include "Animal.hpp"

Animal::Animal() : type("None")
{
	std::cout << "Animal deafult constructor called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	this->type = copy.type;
	std::cout << "Animal assignment operator called." << std::endl;
	return (*this);
}

std::string& Animal::getType(void)
{
	return (this->type);
}

void Animal::makeSound()
{
	std::cout << this->type << " sounds aaaniiimaaal" << std::endl;
}
