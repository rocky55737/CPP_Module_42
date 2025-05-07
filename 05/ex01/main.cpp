/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:08:31 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 13:33:38 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat rhong("rhong", 42);
		Form the_form("the form", 21, 21);
		std::cout << the_form << std::endl;
		rhong.signForm(the_form);
		std::cout << the_form << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
	{
		Bureaucrat tester("tester", 1);
		Form the_form("the form", 21, 21);
		std::cout << the_form << std::endl;
		tester.signForm(the_form);
		std::cout << the_form << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
	try
	{
		Form to_add_data("to add data", 151, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------" << std::endl;
	{
		Bureaucrat tester("tester", 1);
		Form the_form("the form", 21, 21);
		std::cout << the_form << std::endl;
		tester.signForm(the_form);
		std::cout << the_form << std::endl;
		tester.signForm(the_form);
		std::cout << the_form << std::endl;
	}
}