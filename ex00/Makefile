NAME = megaphone
CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Cpp Loader: Compiling $(NAME)"
	$(CC) $(OBJ) -o $(NAME)
	@echo "DONE"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re