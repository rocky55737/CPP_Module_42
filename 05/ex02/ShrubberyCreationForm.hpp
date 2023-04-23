/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:47:45 by rhong             #+#    #+#             */
/*   Updated: 2023/04/23 20:36:26 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"
# define ASCII_TREE \
"				.              .              ;%     ;;   \n"\
"                   ,           ,                :;%  %;    \n"\
"                    :         ;                   :;%;'     .,     \n"\
"           ,.        %;     %;            ;        %;'    ,;  \n"\
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'  \n"\
"              %;       %;%;      ,  ;       %;  ;%;   ,%;'   \n"\
"               ;%;      %;        ;%;        % ;%;  ,%;'  \n"\
"                `%;.     ;%;     %;'         `;%%;.%;'  \n"\
"                 `:;%.    ;%%. %@;        %; ;@%;%'  \n"\
"                    `:%;.  :;bd%;          %;@%;'  \n"\
"                      `@%:.  :;%.         ;@@%;'     \n"\
"                        `@%.  `;@%.      ;@@%;           \n"\
"                          `@%%. `@%%    ;@@%;          \n"\
"                            ;@%. :@%%  %@@%;         \n"\
"                              %@bd%%%bd%%:;       \n"\
"                                #@%%%%%:;;  \n"\
"                                %@@%%%::;  \n"\
"                                %@@@%(o);  . '           \n"\
"                               %@@@o%;:(.,'           \n"\
"                            `.. %@@@o%::;           \n"\
"                               `)@@@o%::;           \n"\
"                                %@@(o)::;          \n"\
"                               .%@@@@%::;           \n"\
"                               ;%@@@@%::;.            \n"\
"                              ;%@@@@%%:;;;.   \n"\
"                          ...;%@@@@@%%:;;;;,..  \n"\

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &init_target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);
	const std::string& getTarget() const;
	virtual void execute(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& out_stream, const ShrubberyCreationForm& form);

#endif