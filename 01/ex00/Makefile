CXX = c++
NAME = BraiiiiiiinnnzzzZ
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp ./Zombie.cpp ./newZombie.cpp ./randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(OBJS) -o $(NAME)

%.o : %.c
	$(CXX) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re