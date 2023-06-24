CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Serializer.cpp
MAIN = data

all: $(NAME)

$(NAME):
	$(CC) -g $(CFILES) Serializer.hpp Data.hpp -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean flcean re