#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	cat_brain = new Brain();
	std::cout << "Cat deafult constructor called." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	cat_brain = new Brain(*copy.getBrain());
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	this->type = copy.type;
	delete cat_brain;
	cat_brain = new Brain(*copy.getBrain());
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete cat_brain;
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << " sounds meow~~~~~~~~~~~" << std::endl;
}

const Brain* Cat::getBrain() const
{
	return (cat_brain);
}