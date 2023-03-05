#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog deafult constructor called." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(const Animal& copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	this->type = copy.type;
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog() : ~Animal()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound()
{
	std::cout << this->type << " sounds bark! bark!" << std::endl;
}
