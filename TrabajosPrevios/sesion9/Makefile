# Makefile para compilar un programa C++ con múltiples archivos y clases
# Nombre del programa ejecutable
TARGET = gestion_biblioteca.exe
# Objetivo predeterminado 
all: $(TARGET)
# Compilador de C++
CXX = g++
# Opciones de compilación
CXXFLAGS = -Wall -std=c++11
# Lista de archivos base
SOURCES = libro.cpp biblioteca.cpp main.cpp
# Lista de archivos objeto generados a partir de los archivos fuente 
OBJECTS = $(SOURCES:.cpp.exe)
# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $<-0$@
# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
$(CXX) $(CXXFLAGS) - $(TARGET) $(OBJECTS)
# Regla para limpiar los archivos generados
.PHONY: clean
clean:
del $(TARGET) $(OBJECTS)