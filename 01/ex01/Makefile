CC = c++
NAME = Moarbrainz
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./Zombie.cpp ./main.cpp ./zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re