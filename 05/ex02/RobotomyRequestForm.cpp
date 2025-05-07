/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:02:10 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 16:31:31 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Default", 72, 45)
{
	this->target = "Default";
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &init_target) : AForm(init_target, 145, 137)
{
	this->target = init_target;
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	*this = copy;
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
	std::cout << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	this->target = copy.target;
	std::cout << "RobotomyRequestForm assignment operator called." << std::endl;
	std::cout << std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	checkExecutable(executor);
	
	std::cout << "...%kind of drilling noises%...";
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int success = std::rand() % 2;
	if (success)
	{
		std::cout << target << " has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << target << "failed to be robotomized." << std::endl;
	}
}