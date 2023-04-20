#include "Form.hpp"


Form::Form(): name("Default"), signed_flag(false), grade_sign(GRADE_DEAFALT), grade_execute(GRADE_DEAFALT)
{
	std::cout << "Form default constructor called" << std::endl;
	std::cout << "name: " << this->name << ", signed flag: " << this->signed_flag << ", grade sign: " << this->grade_sign << ", grade execute" << this->grade_execute << std::endl;
	std::cout << endl;
}

Form(std::string init_name, bool init_signed_flag, int init_grade_sign, int init_grade_execute): name(init_name), signed_flag(init_signed_flag), grade_signed(init_grade_sign), grade_execute(init_grade_execute)
{
	if (this->grade_sign < 1 || this->grade_execute < 1)
		throw GradeTooHighException(this->name);
	if (this->grade_sign > 150 || this->grade_execute > 150)
		throw GradeTooLowException(this->name);
	std::cout << "Form constructor called" << std::endl;
	std::cout << "name: " << this->name << ", signed flag: " << this->signed_flag << ", grade sign: " << this->grade_sign << ", grade execute" << this->grade_execute << std::endl;
	std::cout << endl;
}

Form(const Form& copy)
{
	std::cout << 
}

Form& operator=(const Form& copy);

Form::~Form()
{
}
