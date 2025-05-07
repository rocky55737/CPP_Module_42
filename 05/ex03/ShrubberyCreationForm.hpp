/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:47:45 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 15:39:22 by rhong            ###   ########.fr       */
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
	virtual void execute(const Bureaucrat& executor) const;
};

#endif