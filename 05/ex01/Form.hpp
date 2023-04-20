#ifndef FORM_CPP
# define FORM_CPP

# include <iostream>

class Form
{
private:
	const std::string	name;
	bool	signed_flag;
	const int	grade_sign;
	const int	grade_execute;
public:
	Form();
	Form(const Form& copy);
	Form& operator=(const Form& copy);
	~Form();

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
};

std::ostream& operator<<(std::ostream& out_stream, const Form& form);

#endif