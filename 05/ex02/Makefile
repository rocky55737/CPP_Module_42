CXX = c++
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Bureaucrat.cpp ./AForm.cpp ./PersidentialPerdonForm.cpp ./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
	rm -rf *_shrubbery

re : fclean all

.PHONY: all clean fclean re