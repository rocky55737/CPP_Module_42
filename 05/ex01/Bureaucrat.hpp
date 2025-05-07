/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:28:32 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 14:11:29 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define GRADE_HIGHEST	1
# define GRADE_LOWEST	150
# define GRADE_DEFAULT	GRADE_LOWEST

class Form;

class Bureaucrat 
{
private:
	const std::string	name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string& init_name, int init_grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();
	const std::string	getName() const;
	int	getGrade() const;
	void	setGrade(const int set_grade); 
	void	incrementGrade();
	void	decrementGrade();
	
	class GradeTooHighException : public std::exception {
		private:
			std::string error_message;
		public:
			const char* what() const throw();
			GradeTooHighException(const std::string& err_bureaucrat_name);
			virtual ~GradeTooHighException() throw(){};
	};
	
	class GradeTooLowException : public std::exception {
		private:
			std::string error_message;
		public:
			const char* what() const throw();
			GradeTooLowException(const std::string& err_bureaucrat_name);
			virtual ~GradeTooLowException() throw(){};
	};
	void	signForm(Form& form);
};

std::ostream& operator<<(std::ostream& out_stream, const Bureaucrat& bureaucrat);

#endif