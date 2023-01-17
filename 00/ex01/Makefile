NAME = phonebook
CC = -clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = 
OBJ = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(LFLAG) $(LIB) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY: all clean fclean re