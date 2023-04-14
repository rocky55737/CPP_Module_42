/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:28:32 by rhong             #+#    #+#             */
/*   Updated: 2023/04/12 17:29:16 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define GRADE_HIGHST	1
# define GRADE_LOWEST	150
# define GRADE_DEAFALT	GRADE_LOWEST

class Bureaucrat 
{
private:
	const std::string	name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();
	const std::string	getName() const;
	int	getGrade() const;
	void	setGrade(const int grade); 
	int	incrementGrade();
	int	decrementGrade();
}

#endif