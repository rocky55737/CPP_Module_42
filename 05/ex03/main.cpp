/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:32:06 by rhong             #+#    #+#             */
/*   Updated: 2025/05/08 13:22:48 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	std::cout << "\n=== Creating Wrong Form ===" << std::endl;
	try{
		Intern someRandomIntern;
		AForm* wrong = someRandomIntern.makeForm("not a real form", "Nobody");
		(void)wrong;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Intern someRandomIntern;

	std::cout << "\n=== Creating Forms ===" << std::endl;
	AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "Home");
	AForm* robot = someRandomIntern.makeForm("robotomy request", "Bender");
	AForm* presi = someRandomIntern.makeForm("presidential pardon", "Marvin");

	std::cout << "\n=== Bureaucrats ===" << std::endl;
	Bureaucrat high("High", 1);
	Bureaucrat low("Low", 150);

	std::cout << "\n=== Try to Execute Without Sign ===" << std::endl;
	try {
		shrub->execute(high);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Sign Forms ===" << std::endl;
	high.signForm(*shrub);
	high.signForm(*robot);
	high.signForm(*presi);

	std::cout << "\n=== Execute with Low Grade ===" << std::endl;
	try {
		low.executeForm(*robot);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Execute with High Grade ===" << std::endl;
	high.executeForm(*shrub);
	high.executeForm(*robot);
	high.executeForm(*presi);

	delete shrub;
	delete robot;
	delete presi;

	return 0;
}