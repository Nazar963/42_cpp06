CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp ScalarConverter.cpp
MAIN = converter

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) ScalarConverter.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re