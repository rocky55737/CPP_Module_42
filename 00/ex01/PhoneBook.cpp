#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::pb_init()
{
	string	cmd;

	cmd = "started";
	while (cmd == "EXIT")
	{
		std::cout << "1. ADD   2. SEARCH   3. EXIT" << std::endl;
		std::getline(std::cin, cmd);
		switch (cmd)
		{
		case "ADD":
			PhoneBook::add();
			break;
		case "SEARCH":
			PhoneBook::search();
			break;
		default:
			std::cout << "Insert the command!" << std::endl;
			break;
		}
	}
}

void	PhoneBook::add()
{
	this->contacts[this->fixed_index % 8].setContact();
	fixed_index++;
}

void	PhoneBook::search()
{
	string	cmd;
	int	index;

	cmd = "search";
	while (cmd != "BACK")
	{
		//show all
		std::cin >> cmd;
		
	}
}