#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
	std::cout << "WrongCat deafult constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	this->type = copy.type;
	std::cout << "WrongCat assignment operator called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat() : ~Animal()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << this->type << " sounds Wrong meow~~~~~~~~~~~" << std::endl;
}
