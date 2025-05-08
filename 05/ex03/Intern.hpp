/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:34:28 by rhong             #+#    #+#             */
/*   Updated: 2025/05/08 13:05:45 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Intern(const Intern& copy);
    Intern& operator=(const Intern& copy);
    AForm* makeForm(const std::string& form_name, const std::string& form_target);
    class FormNotFoundException : public std::exception
    {
        private:
			std::string error_message;
		public:
			const char* what() const throw();
			FormNotFoundException(const std::string& err_form_name);
			virtual ~FormNotFoundException() throw(){};
    };
};

#endif