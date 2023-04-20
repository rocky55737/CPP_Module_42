/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:21:24 by rhong             #+#    #+#             */
/*   Updated: 2023/04/19 18:52:31 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat deft;
	Bureaucrat rhong("rhong", 45);
	Bureaucrat copy(rhong);

	std::cout << deft << std::endl;
	std::cout << rhong << std::endl;
	std::cout << copy << std::endl;
	copy = (Bureaucrat("copy", 5));
	std::cout << copy << std::endl;

	Bureaucrat wrong_low("wrong_low", 200);
	Bureaucrat wrong_high("wrong_high", 0);
	std::cout << copy << std::endl;

	std::cout << "-------------------" << std::endl;
	std::cout << "Low exception test" << std::endl;
	std::cout << "-------------------" << std::endl;

	try {
		Bureaucrat low("low", 150);
		std::cout << low << std::endl;
		low.decrementGrade();
		std::cout << low << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "High exception test" << std::endl;
	std::cout << "-------------------" << std::endl;

	try {
		Bureaucrat high("high", 1);
  		std::cout << high << std::endl;
		high.incrementGrade();
		std::cout << high << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "Minus exception test" << std::endl;
	std::cout << "-------------------" << std::endl;
	
	try {
		Bureaucrat minus("minus", -50);
		std::cout << minus << std::endl;
		minus.incrementGrade();
		std::cout << minus << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "Increment Decrement test" << std::endl;
	std::cout << "-------------------" << std::endl;
	
	try {
		Bureaucrat b("b", 50);
		std::cout << b << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;	
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
