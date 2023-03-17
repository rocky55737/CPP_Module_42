CXX = c++
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Animal.cpp ./Cat.cpp ./Dog.cpp ./WrongAnimal.cpp ./WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CXX) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re