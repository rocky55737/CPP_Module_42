#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	Harl::*all_func[4](void);
public:
	void	complain(std::string level);
}

#endif