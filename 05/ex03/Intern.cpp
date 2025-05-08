/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:52:51 by rhong             #+#    #+#             */
/*   Updated: 2025/05/08 13:03:29 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called." << std::endl;
    std::cout << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern default destructor called." << std::endl;
    std::cout << std::endl;
}

Intern::Intern(const Intern& copy)
{
    *this = copy;
	std::cout << "Intern copy constructor called." << std::endl;
	std::cout << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
    (void)copy;
    std::cout << "Intern assignment called." << std::endl;
	std::cout << std::endl;
}

static AForm* createShrubbery(const std::string& target) {
	return new ShrubberyCreationForm(target);
}
static AForm* createRobotomy(const std::string& target) {
	return new RobotomyRequestForm(target);
}
static AForm* createPresidential(const std::string& target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& form_name, const std::string& form_target)
{
    std::string form_names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* (*form_creators[3])(const std::string&) = {
		&createShrubbery,
		&createRobotomy,
		&createPresidential
	};

	for (int i = 0; i < 3; ++i)
	{
		if (form_name == form_names[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return form_creators[i](form_target);
		}
	}

	
	return NULL;
}

Intern::FormNotFoundException::FormNotFoundException(const std::string& err_form_name)
{
	this->error_message = "Intern: FormNotFoundException: " + err_form_name;
}

const char* Intern::FormNotFoundException::what() const throw(){
	return (this->error_message.c_str());
}