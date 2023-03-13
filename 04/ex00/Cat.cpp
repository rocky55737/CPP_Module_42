#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat deafult constructor called." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	this->type = copy.type;
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << " sounds meow~~~~~~~~~~~" << std::endl;
}
