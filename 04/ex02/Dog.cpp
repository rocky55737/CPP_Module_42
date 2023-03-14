#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	dog_brain = new Brain();
	std::cout << "Dog deafult constructor called." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	dog_brain = new Brain(*copy.getBrain());
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	this->type = copy.type;
	delete dog_brain;
	dog_brain = new Brain(*copy.getBrain());
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete dog_brain;
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << " sounds bark! bark!" << std::endl;
}

const Brain* Dog::getBrain() const
{
	return (dog_brain);
}
