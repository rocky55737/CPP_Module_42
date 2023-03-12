#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "no idea";
	std::cout << "Brain deafult constructor called." << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "Brain assignment operator called." << std::endl;
	return (*this);
}

std::string* Brain::getIdea()
{
	return (this->ideas);
}