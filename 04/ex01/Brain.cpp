#include "Brain.hpp"

Brain::Brain();
Brain::Brain(const Brain& copy);
~Brain::Brain();
Brain& Brain::operator=(const Brain& copy);
std::string[] Brain::getIdea();