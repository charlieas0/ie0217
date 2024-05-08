#ifndef CLASS_MATRIZ_HPP
#define CLASS_MATRIZ_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <functional>
#include <regex>

/**
 * @brief Clase plantilla para representar una matriz.
 * 
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template<typename T>
class Matriz {
public:
    int filas; /**< Número de filas de la matriz. */
    int columnas; /**< Número de columnas de la matriz. */
    std::vector<std::vector<T>> datos; /**< Vector bidimensional para almacenar los datos de la matriz. */

public:
    /**
     * @brief Constructor de la clase Matriz.
     * 
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     */
    Matriz(int filas, int columnas);

    /**
     * @brief Destructor de la clase Matriz.
     */
    ~Matriz();

    /**
     * @brief Muestra la matriz en la consola.
     */
    void mostrarMatriz() const;

    /**
     * @brief Establece las dimensiones de la matriz.
     * 
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     */
    void setDimensiones(int filas, int columnas);

    /**
     * @brief Llena la matriz con valores ingresados por el usuario.
     */
    void llenarMatriz();

    /**
     * @brief Establece el valor de un elemento en una posición específica de la matriz.
     * 
     * @param fila Fila del elemento.
     * @param columna Columna del elemento.
     * @param valor Valor a establecer.
     */
    void setValor(int fila, int columna, T valor);

    /**
     * @brief Obtiene el número de filas de la matriz.
     * 
     * @return int Número de filas.
     */
    int getFilas() const;

    /**
     * @brief Obtiene el número de columnas de la matriz.
     * 
     * @return int Número de columnas.
     */
    int getColumnas() const;

    /**
     * @brief Sobrecarga del operador de suma para matrices.
     * 
     * @param otra Segunda matriz a sumar.
     * @return Matriz<T> Matriz resultante de la suma.
     */
    Matriz<T> operator+(const Matriz<T>& otra) const;

    /**
     * @brief Sobrecarga del operador de resta para matrices.
     * 
     * @param otra Segunda matriz a restar.
     * @return Matriz<T> Matriz resultante de la resta.
     */
    Matriz<T> operator-(const Matriz<T>& otra) const;

    /**
     * @brief Sobrecarga del operador de multiplicación para matrices.
     * 
     * @param otra Segunda matriz a multiplicar.
     * @return Matriz<T> Matriz resultante de la multiplicación.
     */
    Matriz<T> operator*(const Matriz<T>& otra) const;
};

/**
 * @brief Clase para realizar operaciones básicas con matrices.
 * 
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template<typename T>
class OperacionesBasicas {
public:
    /**
     * @brief Valida si dos matrices pueden ser sumadas o restadas.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     */
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Valida si dos matrices pueden ser multiplicadas.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     */
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Realiza la suma de dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * @return Matriz<T> Matriz resultante de la suma.
     */
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Realiza la resta de dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * @return Matriz<T> Matriz resultante de la resta.
     */
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Realiza la multiplicación de dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * @return Matriz<T> Matriz resultante de la multiplicación.
     */
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b);
};

/**
 * @brief Clase para validar la entrada de datos.
 */
class ValidadorDeEntrada {
public:
    /**
     * @brief Valida el tipo de dato ingresado.
     * 
     * @param input Cadena de entrada.
     */
    static void validarTipoDato(const std::string& input);

    /**
     * @brief Valida las dimensiones de la matriz.
     * 
     * @param tamano Tamaño de la matriz.
     */
    static void validarDimensiones(int tamano);
};



#endif 
