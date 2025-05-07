/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:39:46 by rhong             #+#    #+#             */
/*   Updated: 2025/05/07 17:43:55 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat high("Alice", 1);
    Bureaucrat low("Charlie", 150);

    ShrubberyCreationForm shrub("Garden");
    RobotomyRequestForm robot("Bender");
    PresidentialPardonForm pardon("Rick");

    std::cout << "\n--- Signing Forms ---" << std::endl;

    try 
    { 
        low.signForm(shrub);
    }
    catch (std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        high.signForm(shrub);
    }
    catch (std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try {
        low.signForm(robot);
    }
    catch (std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try {
        high.signForm(robot);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        low.signForm(pardon);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        high.signForm(pardon);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Executing Forms ---" << std::endl;

    try
    {
        low.executeForm(shrub);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        high.executeForm(shrub);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        low.executeForm(robot);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        high.executeForm(robot);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        low.executeForm(pardon);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        high.executeForm(pardon);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
