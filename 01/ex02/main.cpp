#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address of string: " << &str << std::endl;
	std::cout << "address of strPTR: " << stringPTR << std::endl;
	std::cout << "address of strREF: " << &stringREF << std::endl;

	std::cout << "value of string: " << str << std::endl;
	std::cout << "value of strPTR: " << *stringPTR << std::endl;
	std::cout << "value of strREF: " << stringREF << std::endl;
	return (0);
}
