# Nombre del programa de salida.
TARGET = gestion_biblioteca.txt

#Objetivo predeterminado
all: $(TARGET)
# Compilador de C++
CXX = g++

# Opciones de compilacion
CXXFLAGS = -Wall -std=c++11

# Lista de archivos Fuentes.
SOURCES = main_bi.cpp biblioteca.cpp libro.cpp

# Lista de archivos objetos generados a partir de los archivos fuentes
OBJECTS = $(SOURCES:.cpp=.txt)

# Regla para compilar archivos objetos generados a partir de archivos fuentes 
%.txt: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# regla para limpiar los archivos generados.
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS)
