CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Base.cpp
NAME = base

all: $(NAME)

$(NAME):
	$(CC) -g $(CFILES) Base.hpp -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean flcean re