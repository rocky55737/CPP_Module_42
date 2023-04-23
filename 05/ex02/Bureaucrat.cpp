/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:28:02 by rhong             #+#    #+#             */
/*   Updated: 2023/04/23 20:39:08 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(GRADE_DEAFALT)
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	std::cout << "name: " << this->name << ", grade: " << this->grade << std::endl;
	std::cout << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& init_name, int init_grade) : name(init_name), grade(init_grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	if (this->grade > 150) {
		std::cerr << init_name << " was not constructed!" << std::endl;
		throw GradeTooLowException(init_name);
	} else if (this->grade < 1) {
		std::cerr << init_name << " was not constructed!" << std::endl;
		throw GradeTooHighException(init_name);
	}
	std::cout << "name: " << this->name << ", grade: " << this->grade << std::endl;
	std::cout << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
	*this = copy;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	std::cout << "name: " << this->name << ", grade: " << this->grade << std::endl;
	std::cout << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	this->grade = copy.grade;
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
	if (this->grade <= 1) {
		throw GradeTooHighException(this->name);
	}
	--this->grade;
	std::cout << "name: " << this->name << ", grade: " << this->grade << std::endl;
	std::cout << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	std::cout << "Bureaucrat Decrement called" << std::endl;
	if (this->grade >= 150) {
		throw GradeTooLowException(this->name);
	}
	++this->grade;
	std::cout << "name: " << this->name << ", grade: " << this->grade << std::endl;
	std::cout << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& err_bureaucrat_name) {
	this->error_message = "Bureaucrat: Grade Too High Exception: " + err_bureaucrat_name;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& err_bureaucrat_name) {
	this->error_message = "Bureaucrat: Grade Too Low Exception: " + err_bureaucrat_name;;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return (this->error_message.c_str());
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return (this->error_message.c_str());
}

std::ostream& operator<<(std::ostream& out_stream, const Bureaucrat& bureaucrat) {
	return (out_stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()); 
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because the err occured." << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		execute(*this);
		std::cout << name_ << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Bureaucrat: executeForm: " << e.what() << std::endl;
	}
}