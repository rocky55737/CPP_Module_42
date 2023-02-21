#include <iostream>
#include <fstream>
#include <string>

int	char_ptr_len(char *char_ptr)
{
	int len = 0;
	while (char_ptr[len])
		len++;
	return (len);
}

int main(int ac, char **av)
{
	std::ifstream	read_file;
	std::ofstream	write_file;
	std::string	origin_word;
	std::string	replace_word;
	std::string read_line;

	if (ac != 4)
	{
		std::cout << "Input ERR!" << std::endl;
		return (1);
	}
	read_file.open(av[1]);
	if (!read_file.good())
	{
		std::cout << "File ERR!" << std::endl;
		return (1);
	}
	write_file.open(av[1] += ".replace");
	origin_word = av[2];
	replace_word = av[3];
	while (getline(read_file, read_line))
	{
		while (read_line.find(origin_word) != read_line.end())
		{
			write_file << read_line.substr(0, read_line.find(origin_word) - 1) << replace_word;
			read_line.erase(0, read_line.find(origin_word) + origin_word.length());
		}
		write_file << read_line << std::endl;
	}
	read_file.close();
	write_file.close();
	return (0);
}