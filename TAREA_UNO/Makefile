CXX=g++
CXXFLAGS=-std=c++11 -Wall
SRC=main.cpp adivinanza.cpp
TARGET=my_program

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)
