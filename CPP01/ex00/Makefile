CC=g++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98 -I .
LDFLAGS= -I .
SOURCES=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=zombie

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(EXECUTABLE)
