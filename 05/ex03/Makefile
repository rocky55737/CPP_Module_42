CXX = c++
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Bureaucrat.cpp ./AForm.cpp ./PersidentialPardonForm.cpp ./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp ./Intern.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS)
	rm -rf *_shrubbery

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re