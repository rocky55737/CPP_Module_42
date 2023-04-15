/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:28:02 by rhong             #+#    #+#             */
/*   Updated: 2023/04/15 19:46:41 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(GRADE_DEAFALT)
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	std::cout << "name: " << this.name << ", grade: " << this.grade << std::endl;
	std::cout << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& init_name, int init_grade) : name(init_name), grade(init_grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	std::cout << "name: " << this.name << ", grade: " << this.grade << std::endl;
	std::cout << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	std::cout << "name: " << this.name << ", grade: " << this.grade << std::endl;
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

int	Bureaucrat::incrementGrade();

int	Bureaucrat::decrementGrade();