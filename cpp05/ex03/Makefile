CC=g++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98 -I .
LDFLAGS= -I .
SOURCES=main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=intern

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
