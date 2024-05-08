#ifndef CLASS_MATRIZ_HPP
#define CLASS_MATRIZ_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <functional>
#include <regex>

template<typename T>
class Matriz {
public:
    int filas; // Número de filas de la matriz
    int columnas; // Número de columnas de la matriz
    std::vector<std::vector<T>> datos; // Vector bidimensional para almacenar los datos de la matriz

public:
    // Constructor que inicializa la matriz con el tamaño dado
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        datos.resize(filas, std::vector<T>(columnas)); // Redimensiona el vector bidimensional para almacenar los datos
    }

    // Destructor
    ~Matriz() {
        
    }

    // Método para mostrar la matriz
    void mostrarMatriz() const {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cout << datos[i][j] << " "; // Muestra el elemento en la posición (i, j)
            }
            std::cout << std::endl; // Salto de línea para separar las filas de la matriz
        }
    }

    // Métodos de entrada para establecer las dimensiones y llenar la matriz
    void setDimensiones(int filas, int columnas) {
        // Verificar que las dimensiones sean válidas
        if (filas <= 0 || columnas <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores que cero."); // Lanza una excepción si las dimensiones no son válidas
        }
        this->filas = filas; // Actualiza el número de filas
        this->columnas = columnas; // Actualiza el número de columnas
        datos.resize(filas, std::vector<T>(columnas)); // Redimensiona el vector bidimensional para almacenar los datos
    }

    // Método para llenar la matriz con valores ingresados por el usuario
    void llenarMatriz() {
        std::cout << "Introduce los elementos de la matriz: " << std::endl; // Solicita al usuario que introduzca los elementos de la matriz
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cout << "Elemento (" << i + 1 << ", " << j + 1 << "): "; // Solicita al usuario que introduzca el elemento en la posición (i, j)
                std::cin >> datos[i][j]; // Lee el valor ingresado por el usuario y lo asigna a la matriz
            }
        }
    }


   // Método para establecer el valor de un elemento en la matriz
    void setValor(int fila, int columna, T valor) {
        // Verificar que la fila y la columna estén dentro de los límites de la matriz
        if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
            throw std::out_of_range("La fila o columna está fuera de los límites de la matriz.");
        }
        // Establecer el valor en la posición especificada
        datos[fila][columna] = valor;
    }

    // Método para obtener el número de filas de la matriz
    int getFilas() const {
        return filas;
    }

    // Método para obtener el número de columnas de la matriz
    int getColumnas() const {
        return columnas;
    }

    // Sobrecarga de operadores para la suma de matrices
    Matriz<T> operator+(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la suma.");
        }
        Matriz<T> resultado(filas, columnas); // Crear una nueva matriz para almacenar el resultado
        // Iterar sobre cada elemento y sumar los elementos correspondientes de ambas matrices
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
            }
        }
        return resultado; // Devolver la matriz resultante
    }

    // Sobrecarga de operadores para la resta de matrices
    Matriz<T> operator-(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la resta.");
        }
        Matriz<T> resultado(filas, columnas); // Crear una nueva matriz para almacenar el resultado
        // Iterar sobre cada elemento y restar los elementos correspondientes de ambas matrices
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado; // Devolver la matriz resultante
    }

    // Sobrecarga de operadores para la multiplicación de matrices
    Matriz<T> operator*(const Matriz<T>& otra) const {
        if (columnas != otra.filas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la multiplicación.");
        }
        Matriz<T> resultado(filas, otra.columnas); // Crear una nueva matriz para almacenar el resultado
        // Iterar sobre cada elemento y realizar la multiplicación de matrices
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < otra.columnas; ++j) {
                resultado.datos[i][j] = 0;
                for (int k = 0; k < columnas; ++k) {
                    resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
                }
            }
        }
        return resultado; // Devolver la matriz resultante
    }
};







// =========CLASE OPERACIONES BASICA==============
// Clase de plantilla para realizar operaciones básicas entre matrices
template<typename T>
class OperacionesBasicas {
public:
    // Validación de operaciones

    // Método estático para validar la compatibilidad de dimensiones de matrices para suma y resta
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.getFilas() != b.getFilas() || a.getColumnas() != b.getColumnas()) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la suma o resta.");
        }
    }

    // Método estático para validar la compatibilidad de dimensiones de matrices para multiplicación
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.getColumnas() != b.getFilas()) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la multiplicación.");
        }
    }

    // Operaciones matemáticas

    // Método estático para realizar la suma de matrices
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b) {
        validarSumaResta(a, b); // Validar la compatibilidad de dimensiones
        Matriz<T> resultado(a.getFilas(), a.getColumnas()); // Crear una nueva matriz para almacenar el resultado
        // Utilizar transform para sumar elemento por elemento de las filas de las matrices a y b
        std::transform(a.datos.begin(), a.datos.end(), b.datos.begin(), resultado.datos.begin(),
                       [](const std::vector<T>& fila_a, const std::vector<T>& fila_b) {
                           std::vector<T> fila_resultado;
                           fila_resultado.reserve(fila_a.size());
                           // Utilizar std::plus para sumar los elementos de las filas
                           std::transform(fila_a.begin(), fila_a.end(), fila_b.begin(),
                                          std::back_inserter(fila_resultado), std::plus<T>());
                           return fila_resultado;
                       });
        return resultado; // Devolver la matriz resultante
    }

    // Método estático para realizar la resta de matrices
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b) {
        validarSumaResta(a, b); // Validar la compatibilidad de dimensiones
        Matriz<T> resultado(a.getFilas(), a.getColumnas()); // Crear una nueva matriz para almacenar el resultado
        // Utilizar transform para restar elemento por elemento de las filas de las matrices a y b
        std::transform(a.datos.begin(), a.datos.end(), b.datos.begin(), resultado.datos.begin(),
                       [](const std::vector<T>& fila_a, const std::vector<T>& fila_b) {
                           std::vector<T> fila_resultado;
                           fila_resultado.reserve(fila_a.size());
                           // Utilizar std::minus para restar los elementos de las filas
                           std::transform(fila_a.begin(), fila_a.end(), fila_b.begin(),
                                          std::back_inserter(fila_resultado), std::minus<T>());
                           return fila_resultado;
                       });
        return resultado; // Devolver la matriz resultante
    }

    // Método estático para realizar la multiplicación de matrices
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        validarMultiplicacion(a, b); // Validar la compatibilidad de dimensiones
        Matriz<T> resultado(a.getFilas(), b.getColumnas()); // Crear una nueva matriz para almacenar el resultado
        // Iterar sobre las filas de la matriz a
        for (int i = 0; i < a.getFilas(); ++i) {
            // Iterar sobre las columnas de la matriz b
            for (int j = 0; j < b.getColumnas(); ++j) {
                // Iterar sobre las columnas de la matriz a
                for (int k = 0; k < a.getColumnas(); ++k) {
                    resultado.datos[i][j] += a.datos[i][k] * b.datos[k][j]; // Multiplicar y sumar los productos de los elementos correspondientes
                }
            }
        }
        return resultado; // Devolver la matriz resultante
    }
};



//==============CLASE PARA VALIDAR LA ENTRADA=============
// Clase estática para validar entradas
class ValidadorDeEntrada {
public:
    // Método estático para validar el tipo de dato ingresado
    static void validarTipoDato(const std::string& input) {
        // Expresiones regulares para verificar si el tipo de dato ingresado es int, float o std::complex
        std::regex regex_int("^int$", std::regex_constants::icase);
        std::regex regex_float("^float$", std::regex_constants::icase);
        std::regex regex_complex("^std::complex$", std::regex_constants::icase);

        // Verificar si el tipo de dato ingresado coincide con alguna de las expresiones regulares
        if (!std::regex_match(input, regex_int) && !std::regex_match(input, regex_float) && !std::regex_match(input, regex_complex)) {
            throw std::invalid_argument("Tipo de dato no soportado. Los tipos permitidos son: int, float, std::complex.");
        }
    }

    // Método estático para validar las dimensiones de la matriz
    static void validarDimensiones(int tamano) {
        // Verificar si el tamaño es un entero positivo y válido
        if (tamano <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser enteros positivos y válidos.");
        }
    }
};
#endif