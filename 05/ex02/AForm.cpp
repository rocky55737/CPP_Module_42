/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:35:58 by rhong             #+#    #+#             */
/*   Updated: 2025/05/08 16:29:03 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name("Default"), signed_flag(false), grade_sign(GRADE_DEFAULT), grade_execute(GRADE_DEFAULT)
{
	std::cout << "AForm default constructor called." << std::endl;
	std::cout << *this;
	std::cout << std::endl;
}

AForm::AForm(std::string init_name, int init_grade_sign, int init_grade_execute): name(init_name), signed_flag(false), grade_sign(init_grade_sign), grade_execute(init_grade_execute)
{
	if (this->grade_sign < 1 || this->grade_execute < GRADE_HIGHEST)
		throw GradeTooHighException(this->name);
	if (this->grade_sign > 150 || this->grade_execute > GRADE_LOWEST)
		throw GradeTooLowException(this->name);
	std::cout << "AForm constructor called" << std::endl;
	std::cout << *this;
	std::cout << std::endl;
}

AForm::AForm(const AForm& copy): name(copy.name), grade_sign(copy.grade_sign), grade_execute(copy.grade_execute)
{
	*this = copy;
	std::cout << "AForm copy constructor called" << std::endl;
	std::cout << *this;
	std::cout << std::endl;
}

AForm& AForm::operator=(const AForm& copy)
{
	this->signed_flag = copy.signed_flag;
	std::cout << "AForm assignment operator called." << std::endl;
	std::cout << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called." << std::endl;
	std::cout << std::endl;
}

const std::string&	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getSignedFlag() const
{
	return (this->signed_flag);
}

int	AForm::getGradeSign() const
{
	return (this->grade_sign);
}

int	AForm::getGradeExecute() const
{
	return (this->grade_execute);
}

AForm::GradeTooHighException::GradeTooHighException(const std::string& err_form_name)
{
	this->error_message = "AForm: Grade Too High Exception: " + err_form_name;
}

AForm::GradeTooLowException::GradeTooLowException(const std::string& err_form_name)
{
	this->error_message = "AForm: Grade Too Low Exception: " + err_form_name;
}

AForm::SignedAlreadyException::SignedAlreadyException(const std::string& err_form_name)
{
	this->error_message = "AForm: Is signed already: " + err_form_name;
}

AForm::NotSignedException::NotSignedException(const std::string& err_form_name)
{
	this->error_message = "AForm: Is not signed yet: " + err_form_name;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return (this->error_message.c_str());
}

const char* AForm::GradeTooLowException::what() const throw(){
	return (this->error_message.c_str());
}

const char* AForm::SignedAlreadyException::what() const throw(){
	return (this->error_message.c_str());
}

const char* AForm::NotSignedException::what() const throw(){
	return (this->error_message.c_str());
}

std::ostream& operator<<(std::ostream& out_stream, const AForm& form) {
	return (out_stream << "name: " << form.getName() << ", signed flag: " << form.getSignedFlag() << ", grade sign: " << form.getGradeSign() << ", grade execute: " << form.getGradeExecute() << std::endl); 
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->signed_flag)
		throw SignedAlreadyException(this->name);
	if (this->grade_sign < bureaucrat.getGrade())
		throw GradeTooLowException(this->name);
	this->signed_flag = true;
}

void	AForm::checkExecutable(const Bureaucrat& executor) const
{
	if (this->getSignedFlag() == false)
		throw NotSignedException(this->getName());
	if (this->getGradeExecute() < executor.getGrade())
		throw GradeTooLowException(this->getName());
}