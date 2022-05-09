CC=g++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98 -I .
LDFLAGS= -I .
SOURCES=tests.cpp Account.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=accounts

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(EXECUTABLE)
