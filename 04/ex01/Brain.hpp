#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& copy);
	~Brain();
	Brain& operator=(const Brain& copy);
	const std::string* getIdea() const;
	void setIdea(int index, std::string new_idea);
};

#endif