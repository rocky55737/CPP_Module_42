CC = c++
NAME = sed
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS);
	rm -rf *.replace

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re