CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Serializer.cpp
MAIN = data

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) Serializer.hpp Data.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re