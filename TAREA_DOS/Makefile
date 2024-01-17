CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = my_program

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

.DEFAULT_GOAL := run

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)