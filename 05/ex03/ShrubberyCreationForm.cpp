/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:09:57 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 17:48:08 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default", 145, 137)
{
	this->target = "Default";
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &init_target) : AForm(init_target, 145, 137)
{
	this->target = init_target;
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	*this = copy;
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
	std::cout << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->target = copy.target;
	std::cout << "ShrubberyCreationForm assignment operator called." << std::endl;
	std::cout << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	checkExecutable(executor);
	
	std::cout << "ShrubberyCreationForm executed." << std::endl;
	std::ofstream	out_file;
	out_file.open((this->target + "_shrubbery").c_str());
	out_file << ASCII_TREE;
	out_file.close();
}