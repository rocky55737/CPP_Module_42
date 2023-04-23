#ifndef AFORM_CPP
# define AFORM_CPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool	signed_flag;
	const int	grade_sign;
	const int	grade_execute;
public:
	AForm();
	AForm(std::string init_name, int init_grade_sign, int init_grade_execute);
	AForm(const AForm& copy);
	AForm& operator=(const AForm& copy);
	virtual ~AForm();
	const std::string	getName() const;
	bool	getSignedFlag() const;
	int	getGradeSign() const;
	int	getGradeExecute() const;
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
	
	virtual void	execute(const Bureaucrat& bureaucrat) = 0;
};

std::ostream& operator<<(std::ostream& out_stream, const AForm& form);

#endif