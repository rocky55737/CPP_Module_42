/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:23:08 by rhong             #+#    #+#             */
/*   Updated: 2025/05/12 15:31:12 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cerrno>

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }
ScalarConverter::~ScalarConverter() {}

static bool isPseudoLiteral(const std::string& literal) {
    return literal == "nan" || literal == "nanf" ||
           literal == "+inf" || literal == "+inff" ||
           literal == "-inf" || literal == "-inff";
}

void ScalarConverter::convert(const std::string& literal) {
    std::cout << std::fixed << std::setprecision(1);

    // CHAR
    try {
        int c = std::atoi(literal.c_str());
        if (c < 0 || c > 127)
            throw std::exception();
        if (std::isprint(c))
            std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } catch (...) {
        std::cout << "char: impossible" << std::endl;
    }

    // INT
    try {
        errno = 0;
        long i = std::strtol(literal.c_str(), NULL, 10);
        if (errno || i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
            throw std::exception();
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    } catch (...) {
        std::cout << "int: impossible" << std::endl;
    }

    // FLOAT
    try {
        float f = static_cast<float>(std::atof(literal.c_str()));
        if (isPseudoLiteral(literal))
            std::cout << "float: " << literal << "f" << std::endl;
        else
            std::cout << "float: " << f << "f" << std::endl;
    } catch (...) {
        std::cout << "float: impossible" << std::endl;
    }

    // DOUBLE
    try {
        double d = std::strtod(literal.c_str(), NULL);
        if (isPseudoLiteral(literal))
            std::cout << "double: " << literal << std::endl;
        else
            std::cout << "double: " << d << std::endl;
    } catch (...) {
        std::cout << "double: impossible" << std::endl;
    }
}