#include "Contact.hpp"
#include <iostream>

Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("")
{}

Contact::~Contact()
{
	delete this;
}

void	Contact::setContact()
{
	int	null_flag = 0;

	for (int cnt = 0; cnt < 5; cnt++)
	{
		switch (cnt)
		{
		case 0:
			std::cout << "First name: ";
			std::cin >> this->first_name;
			if (this->first_name.length() == 0)
				null_flag = 1;
			break;
		case 1:
			std::cout << "Last name: ";
			std::cin >> this->last_name;
			if (this->last_name.length() == 0)
				null_flag = 1;
			break;
		case 2:
			std::cout << "Nickname: ";
			std::cin >> this->nickname;
			if (this->nickname.length() == 0)
				null_flag = 1;
			break;
		case 3:
			std::cout << "Phone number: ";
			std::cin >> this->phone_number;
			if (this->phone_number.length() == 0)
				null_flag = 1;
			break;
		case 4:
			std::cout << "Darkest secret: ";
			std::cin >> this->darkest_secret;
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
