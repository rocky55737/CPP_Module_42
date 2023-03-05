#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat deafult constructor called." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(const Animal& copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	this->type = copy.type;
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat() : ~Animal()
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound()
{
	std::cout << this->type << " sounds meow~~~~~~~~~~~" << std::endl;
}
