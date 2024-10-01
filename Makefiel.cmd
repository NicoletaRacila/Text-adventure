# Compilator
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Fișiere sursă
SOURCES = main.cpp Player.cpp Room.cpp Game.cpp

# Fișierul executabil
EXECUTABLE = game

# Regulă implicită
all: $(EXECUTABLE)

# Regula de compilare
$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Curăță fișierele generate
clean:
	rm -f $(EXECUTABLE)
