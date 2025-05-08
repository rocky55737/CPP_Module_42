/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:32:06 by rhong             #+#    #+#             */
/*   Updated: 2025/05/08 13:05:47 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	try {
		Intern someRandomIntern;

		std::cout << "\n=== Creating Forms ===" << std::endl;
		AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "Home");
		AForm* robot = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm* presi = someRandomIntern.makeForm("presidential pardon", "Marvin");
		AForm* wrong = someRandomIntern.makeForm("not a real form", "Nobody");

		std::cout << "\n=== Bureaucrats ===" << std::endl;
		Bureaucrat high("High", 1);
		Bureaucrat low("Low", 150);

		std::cout << "\n=== Try to Execute Without Sign ===" << std::endl;
		try {
			shrub->execute(high);
		} catch (std::exception &e) {
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}

		std::cout << "\n=== Sign Forms ===" << std::endl;
		high.signForm(*shrub);
		high.signForm(*robot);
		high.signForm(*presi);

		std::cout << "\n=== Execute with Low Grade ===" << std::endl;
		try {
			low.executeForm(*robot);
		} catch (std::exception &e) {
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}

		std::cout << "\n=== Execute with High Grade ===" << std::endl;
		high.executeForm(*shrub);
		high.executeForm(*robot);
		high.executeForm(*presi);

		delete shrub;
		delete robot;
		delete presi;

	} catch (std::exception& e) {
		std::cerr << "Fatal error: " << e.what() << std::endl;
	}

	return 0;
}