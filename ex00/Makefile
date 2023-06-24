CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp ScalarConverter.cpp
NAME = converter

all: $(NAME)

$(NAME):
	$(CC) -g $(CFILES) ScalarConverter.hpp -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean flcean re