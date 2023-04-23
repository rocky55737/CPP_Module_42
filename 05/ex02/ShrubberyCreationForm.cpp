/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:09:57 by rhong             #+#    #+#             */
/*   Updated: 2023/04/23 20:54:47 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default", 145, 137)
{
	this->target = "TargetDefault";
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &init_target) : AForm(init_target, 145, 137)
{
	this->target = init_target;
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	*this = copy;
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	std::cout << *this << std::endl;
	std::cout << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	std::cout << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->target = copy.target;
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	std::cout << std::endl;
	return (*this);
}

const std::string& getTarget() const
{
	return (this.target);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSignedFlag() == false)
		throw NotSignedException(this->getName());
	if (this->getGradeExecute() < executor.getGrade())
		throw GradeTooLowException(this->getName());
	
	std::ofstream	out_file;
	out_file.open(this->target + "_shrubbery");
	out_file << ASCII_TREE;
	out_file.close();
}

std::ostream& operator<<(std::ostream& out_stream, const ShrubberyCreationForm& form)
{
	return (out_stream << "target: " form.getTarget() << "name: " << form.getName() << ", signed flag: " << form.getSignedFlag() << ", grade sign: " << form.getGradeSign() << ", grade execute: " << form.getGradeExecute()); 
}