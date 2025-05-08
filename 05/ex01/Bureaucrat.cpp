/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:28:02 by rhong             #+#    #+#             */
/*   Updated: 2025/05/08 13:00:19 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(GRADE_DEFAULT)
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	std::cout << *this;
	std::cout << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& init_name, int init_grade) : name(init_name), grade(init_grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	if (this->grade > GRADE_LOWEST) {
		std::cerr << init_name << " was not constructed!" << std::endl;
		throw GradeTooLowException(init_name);
	} else if (this->grade < GRADE_HIGHEST) {
		std::cerr << init_name << " was not constructed!" << std::endl;
		throw GradeTooHighException(init_name);
	}
	std::cout << *this;
	std::cout << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
	*this = copy;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	std::cout << *this;
	std::cout << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
	{
		this->grade = copy.grade;
	}
	std::cout << "Bureaucrat assignment called." << std::endl;
	std::cout << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
	std::cout << std::endl;
}

const std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(const int set_grade)
{
	this->grade = set_grade;
}

void	Bureaucrat::incrementGrade()
{
	std::cout << "Bureaucrat Increment called" << std::endl;
	if (this->grade <= GRADE_HIGHEST) {
		throw GradeTooHighException(this->name);
	}
	--this->grade;
	std::cout << *this;
	std::cout << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	std::cout << "Bureaucrat Decrement called" << std::endl;
	if (this->grade >= GRADE_LOWEST) {
		throw GradeTooLowException(this->name);
	}
	++this->grade;
	std::cout << *this;
	std::cout << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& err_bureaucrat_name) {
	this->error_message = "Grade Too High Exception: " + err_bureaucrat_name;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& err_bureaucrat_name) {
	this->error_message = "Grade Too Low Exception: " + err_bureaucrat_name;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return (this->error_message.c_str());
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return (this->error_message.c_str());
}

std::ostream& operator<<(std::ostream& out_stream, const Bureaucrat& bureaucrat) {
	return (out_stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl); 
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << form.getName() << " because the following err occured." << std::endl;
		std::cerr << e.what() << std::endl;
	}
}