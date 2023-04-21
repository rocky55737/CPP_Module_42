/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:08:49 by rhong             #+#    #+#             */
/*   Updated: 2023/04/21 19:29:40 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CPP
# define FORM_CPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool	signed_flag;
	const int	grade_sign;
	const int	grade_execute;
public:
	Form();
	Form(std::string init_name, int init_grade_sign, int init_grade_execute);
	Form(const Form& copy);
	Form& operator=(const Form& copy);
	~Form();
	const std::string	getName();
	bool	getSignedFlag();
	int	getGradeSign();
	int	getGradeExecute();
	void	beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception {
		private:
			std::string error_message;
		public:
			const char* what() const throw();
			GradeTooHighException(const std::string& err_form_name);
			virtual ~GradeTooHighException() throw(){};
	};
	
	class GradeTooLowException : public std::exception {
		private:
			std::string error_message;
		public:
			const char* what() const throw();
			GradeTooLowException(const std::string& err_form_name);
			virtual ~GradeTooLowException() throw(){};
	};
};

std::ostream& operator<<(std::ostream& out_stream, const Form& form);

#endif