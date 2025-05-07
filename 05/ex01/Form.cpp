/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:08:40 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 14:12:24 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("Default"), signed_flag(false), grade_sign(GRADE_DEFAULT), grade_execute(GRADE_DEFAULT)
{
	std::cout << "Form default constructor called." << std::endl;
	std::cout << *this;
	std::cout << std::endl;
}

Form::Form(std::string init_name, int init_grade_sign, int init_grade_execute): name(init_name), signed_flag(false), grade_sign(init_grade_sign), grade_execute(init_grade_execute)
{
	if (this->grade_sign < 1 || this->grade_execute < GRADE_HIGHEST)
		throw GradeTooHighException(this->name);
	if (this->grade_sign > 150 || this->grade_execute > GRADE_LOWEST)
		throw GradeTooLowException(this->name);
	std::cout << "Form constructor called" << std::endl;
	std::cout << *this;
	std::cout << std::endl;
}

Form::Form(const Form& copy): name(copy.name), grade_sign(copy.grade_sign), grade_execute(copy.grade_execute)
{
	*this = copy;
	std::cout << "Form copy constructor called" << std::endl;
	std::cout << "name: " << this->name << ", signed flag: " << this->signed_flag << ", grade sign: " << this->grade_sign << ", grade execute: " << this->grade_execute << std::endl;
	std::cout << std::endl;
}

Form& Form::operator=(const Form& copy)
{
	this->signed_flag = copy.signed_flag;
	std::cout << "Form assignment operator called." << std::endl;
	std::cout << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
	std::cout << std::endl;
}

const std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSignedFlag() const
{
	return (this->signed_flag);
}

int	Form::getGradeSign() const
{
	return (this->grade_sign);
}

int	Form::getGradeExecute() const
{
	return (this->grade_execute);
}

Form::GradeTooHighException::GradeTooHighException(const std::string& err_form_name)
{
	this->error_message = "Form: Grade Too High Exception: " + err_form_name;
}

Form::GradeTooLowException::GradeTooLowException(const std::string& err_form_name)
{
	this->error_message = "Form: Grade Too Low Exception: " + err_form_name;
}

Form::SignedAlreadyException::SignedAlreadyException(const std::string& err_form_name)
{
	this->error_message = "Form: Is signed already: " + err_form_name;
}

const char* Form::GradeTooHighException::what() const throw(){
	return (this->error_message.c_str());
}

const char* Form::GradeTooLowException::what() const throw(){
	return (this->error_message.c_str());
}

const char* Form::SignedAlreadyException::what() const throw(){
	return (this->error_message.c_str());
}

std::ostream& operator<<(std::ostream& out_stream, const Form& form) {
	return (out_stream << "name: " << form.getName() << ", signed flag: " << form.getSignedFlag() << ", grade sign: " << form.getGradeSign() << ", grade execute: " << form.getGradeExecute() << std::endl); 
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->signed_flag)
		throw SignedAlreadyException(this->name);
	if (this->grade_sign < bureaucrat.getGrade())
		throw GradeTooLowException(this->name);
	this->signed_flag = true;
}