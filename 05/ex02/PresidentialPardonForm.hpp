/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:33:04 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 17:00:47 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &init_target);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
	virtual ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
	virtual void execute(const Bureaucrat& executor) const;
};

#endif