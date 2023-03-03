#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret(""), empty_flag(1)
{}

void	Contact::setContact()
{
	int	null_flag = 0;

	for (int cnt = 0; cnt < 5; cnt++)
	{
		switch (cnt)
		{
		case 0:
			std::cout << "First name: ";
			std::getline(std::cin, this->first_name);
			if (std::cin.eof())
				return ;
			if (this->first_name.length() == 0)
				null_flag = 1;
			break;
		case 1:
			std::cout << "Last name: ";
			std::getline(std::cin, this->last_name);
			if (std::cin.eof())
				return ;
			if (this->last_name.length() == 0)
				null_flag = 1;
			break;
		case 2:
			std::cout << "Nickname: ";
			std::getline(std::cin, this->nickname);
			if (std::cin.eof())
				return ;
			if (this->nickname.length() == 0)
				null_flag = 1;
			break;
		case 3:
			std::cout << "Phone number: ";
			std::getline(std::cin, this->phone_number);
			if (std::cin.eof())
				return ;
			if (this->phone_number.length() == 0)
				null_flag = 1;
			break;
		case 4:
			std::cout << "Darkest secret: ";
			std::getline(std::cin, this->darkest_secret);
			if (std::cin.eof())
				return ;
			if (this->darkest_secret.length() == 0)
				null_flag = 1;
			break;
		}
		if (null_flag > 0)
		{
			std::cout << "Please input someting!" << std::endl;
			null_flag--;
			cnt--;
		}
	}
	this->empty_flag = 0;
}

void	Contact::unsetContact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
	this->empty_flag = 1;
}

Contact *Contact::getContact()
{
	return (this);
}

std::string Contact::getFirstName()
{
	return (this->first_name);
}

std::string Contact::getLastName()
{
	return (this->last_name);
}

std::string Contact::getNickName()
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->phone_number);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkest_secret);
}

int	Contact::getEmptyFlag()
{
	return (this->empty_flag);
}