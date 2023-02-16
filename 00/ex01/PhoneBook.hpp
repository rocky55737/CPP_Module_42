#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
private:
	Contact contacts[8];
	std::string	commands[3] = {"ADD", "SEARCH", "EXIT"};
	int	fixed_index = 0;
public:
	void	pb_init();
	void	add();
	void	search();
	void	exit();
};

#endif