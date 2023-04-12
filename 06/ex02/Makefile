CXX = c++
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std

SRCS = ./megaphone.cpp

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

re : fclean all

.PHONY: all clean fclean re