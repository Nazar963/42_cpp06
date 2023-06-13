CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Base.cpp
MAIN = base

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) Base.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re