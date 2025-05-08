/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PersidentialPerdonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:01:31 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 17:46:04 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default", 25, 5)
{
	this->target = "Default";
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &init_target) : AForm(init_target, 145, 137)
{
	this->target = init_target;
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	*this = copy;
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
	std::cout << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	this->target = copy.target;
	std::cout << "PresidentialPardonForm assignment operator called." << std::endl;
	std::cout << std::endl;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	checkExecutable(executor);
	
	std::cout << "PresidentialPardonForm executed." << std::endl;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}