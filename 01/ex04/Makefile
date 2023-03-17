CXX = c++
NAME = sed
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS);
	rm -rf *.replace

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re