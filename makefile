CC = g++
CFLAGS = -c
SOURCES = main.cpp triangle.cpp rectangle.cpp
EXECUTABLE = calculator

OBJECTS = $(SOURCES:.cpp = .o)


all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

debug:
	$(CC) -g $(SOURCES) -o dbg 
