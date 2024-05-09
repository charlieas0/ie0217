# Compilador de C++
CXX = g++
# Opciones de compilacion
CXXFLAGS = -Wall -std=c++11
LDFLAGS = -lstdc++fs

# archivos de direccionamiento
SRC_DIR = src
BIN_DIR = bin

# Lista de archivos Fuentes.
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe)
EXECUTABLE = $(BIN_DIR)/textprocessor

all: $(EXECUTABLE)

# Regla para compilar archivos objetos generados a partir de archivos fuentes
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

# Regla para compilar el programa a partir de los archivos objeto
$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


# regla para limpiar los archivos generados.
clean:
	rm -rf $(BIN_DIR)
