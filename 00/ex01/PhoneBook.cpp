#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::add()
{
	this->contacts[this->fixed_index % 8].setContact();
	fixed_index++;
}

void	PhoneBook::search()
{
	//show all info
	//wait input
	//show more info of specific row
}