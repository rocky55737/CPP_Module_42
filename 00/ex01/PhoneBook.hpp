#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
private:
	Contact contacts[8];
	std::string	commands[3];
	int	fixed_index;
public:
	PhoneBook();
	void	pbInit();
	void	add();
	void	search();
	void	showAll();
	int		checkValidIndex(std::string index);
};

#endif