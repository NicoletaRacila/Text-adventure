
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11


SOURCES = main.cpp Player.cpp Room.cpp Game.cpp


EXECUTABLE = game


all: $(EXECUTABLE)


$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^


clean:
	rm -f $(EXECUTABLE)
