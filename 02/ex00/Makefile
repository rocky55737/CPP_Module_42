CC = c++
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./Fixed.cpp ./main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re