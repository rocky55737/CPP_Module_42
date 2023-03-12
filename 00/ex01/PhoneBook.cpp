#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : fixed_index(0)
{
	commands[0] = "ADD";
	commands[1] = "SEARCH";
	commands[2] = "EXIT";
	std::cout << "started" << std::endl;
}

void	PhoneBook::pbInit()
{
	std::string	cmd;

	cmd = "started";
	while (cmd != "EXIT" && !std::cin.eof())
	{
		std::cout << "1. ADD   2. SEARCH   3. EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			break ;
		}
		if (cmd == "EXIT")
			return;
		if (cmd == "ADD")
			this->add();
		else if (cmd == "SEARCH")
			this->search();
		else
			std::cout << "Insert the command!" << std::endl;
	}
}

void	PhoneBook::add()
{
	this->contacts[this->fixed_index % 8].setContact();
	fixed_index++;
}

void	PhoneBook::showAll()
{
	std::string info[3];

	for (int i = 0; i < 8 && !this->contacts[i].getEmptyFlag(); i++)
	{
		std::cout << std::setw(10) << i + 1;
		info[0] = this->contacts[i].getFirstName();
		info[1] = this->contacts[i].getLastName();
		info[2] = this->contacts[i].getNickName();
		for (int cnt = 0; cnt < 3; cnt++)
		{
			std::cout << "|";
			if (info[cnt].length() > 10)
				std::cout << info[cnt].substr(0, 9) << '.';
			else
				std::cout << std::setw(10) << info[cnt];
		}
		std::cout << std::endl;
	}
}

int	PhoneBook::checkValidIndex(std::string index)
{
	int	num = 0;

	std::istringstream(index) >> num;
	if (num >= 1 && num <= 8 && !this->contacts[num - 1].getEmptyFlag())
		return (1);
	return (0);
}

void	PhoneBook::search()
{
	std::string	cmd;
	int	index;

	cmd = "search";
	std::cout << "Insert the valid index or BACK" << std::endl;
	this->showAll();
	while (cmd != "BACK")
	{
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return ;
		if (cmd == "BACK")
			return;
		if (this->checkValidIndex(cmd))
		{
			std::istringstream(cmd) >> index;
			std::cout << "first name: " << this->contacts[index - 1].getFirstName() << std::endl;
			std::cout << "last name: " << this->contacts[index - 1].getLastName() << std::endl;
			std::cout << "nickname: " << this->contacts[index - 1].getNickName() << std::endl;
			std::cout << "phone number: " << this->contacts[index - 1].getPhoneNumber() << std::endl;
			std::cout << "darkest secret: " << this->contacts[index - 1].getDarkestSecret() << std::endl;
			std::cout << "Insert the valid index or BACK" << std::endl;
			continue;
		}
		std::cout << "invalid index err" << std::endl;
		std::cout << "Insert the valid index or BACK" << std::endl;
		showAll();
	}
}
