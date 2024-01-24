CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Nombre de los ejecutables
MATRICES_TARGET = matricesPrograma
EMAIL_TARGET = emailPrograma

# Fuentes para el programa de matrices
MATRICES_SRCS = main.cpp matriz.cpp
MATRICES_OBJS = $(MATRICES_SRCS:.cpp=.o)

# Fuentes para el programa de email
EMAIL_SRCS = main2.cpp email.hpp
EMAIL_OBJS = $(EMAIL_SRCS:.cpp=.o)

.DEFAULT_GOAL := help

help:
	@echo "Uso:"
	@echo "  make matrices   : Compila y ejecuta el programa de matrices."
	@echo "  make email      : Compila y ejecuta el programa de email."
	@echo "  make clean      : Elimina los archivos objeto y ejecutables."
	@echo ""

# Reglas para compilar el programa de matrices
matrices: $(MATRICES_TARGET)
	./$(MATRICES_TARGET)

$(MATRICES_TARGET): $(MATRICES_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

mainMatrices.o: mainMatrices.cpp matriz.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

matriz.o: matriz.cpp matriz.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Reglas para compilar el programa de email
email: $(EMAIL_TARGET)
	./$(EMAIL_TARGET)

$(EMAIL_TARGET): $(EMAIL_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

mainEmail.o: mainEmail.cpp email.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

email.o: email.cpp email.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(MATRICES_TARGET) $(EMAIL_TARGET) $(MATRICES_OBJS) $(EMAIL_OBJS)
