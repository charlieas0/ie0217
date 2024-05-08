#include <iostream>
#include <vector>
#include <stdexcept> // Para el manejo de excepciones
#include <complex>   // Si se utilizarán matrices de números complejos
#include <algorithm> // Para std::transform
#include <random>
#include <string>
#include <regex> // Para la validación de tipo de datos
#include"Class_matriz.hpp"
#include"mostrar_menu.hpp"

using namespace std;








int main() {
    Matriz<std::complex<double>> matriz1(0, 0), matriz2(0, 0); // Declaración de dos matrices de números complejos

    string tipo_dato; // Variable para almacenar el tipo de dato seleccionado
    int opcion; // Variable para almacenar la opción seleccionada en el menú
    int operacion = 0; // Variable para almacenar la operación seleccionada, inicialmente 0

    while (true) { // Bucle infinito para mostrar el menú repetidamente
        mostrarMenu(); // Llama a la función mostrarMenu() para mostrar las opciones del menú
        cin >> opcion; // Lee la opción seleccionada por el usuario

        switch (opcion) { // Inicia un switch para manejar las diferentes opciones del menú
            case 1: { // Opción para ingresar el tamaño y los valores de las matrices
                int filas, columnas; // Variables para almacenar el número de filas y columnas

                cout << "Ingrese el número de filas: "; // Solicita al usuario que ingrese el número de filas
                cin >> filas; // Lee el número de filas ingresado por el usuario
                cout << "Ingrese el número columnas de las matrices: "; // Solicita al usuario que ingrese el número de columnas
                cin >> columnas; // Lee el número de columnas ingresado por el usuario
                ValidadorDeEntrada::validarDimensiones(filas); // Valida las dimensiones ingresadas por el usuario
                ValidadorDeEntrada::validarDimensiones(columnas);

                // Inicializa las matrices con el tamaño dado
                matriz1 = Matriz<std::complex<double>>(filas, columnas);
                matriz2 = Matriz<std::complex<double>>(filas, columnas);

                // Llena las matrices con valores ingresados por el usuario
                matriz1.llenarMatriz();
                matriz2.llenarMatriz();
                break;
            }
            case 2: { // Opción para seleccionar el tipo de dato para las matrices
                cout << "Ingrese el tipo de dato para las matrices (int, float, std::complex): "; // Solicita al usuario que ingrese el tipo de dato
                cin >> tipo_dato; // Lee el tipo de dato ingresado por el usuario
                try {
                    ValidadorDeEntrada::validarTipoDato(tipo_dato); // Valida el tipo de dato ingresado por el usuario
                } catch (const std::invalid_argument& e) {
                    cerr << "Error: " << e.what() << endl; // Imprime un mensaje de error si se produce una excepción
                }
                break;
            }
            case 3: { // Opción para generar datos aleatorios para las matrices
                if (tipo_dato.empty()) { // Verifica si se ha seleccionado un tipo de dato
                    cout << "Primero seleccione el tipo de dato para las matrices." << endl;
                } else {
                    random_device rd; // Genera un dispositivo de números aleatorios
                    mt19937 gen(rd()); // Generador de números aleatorios

                    if (tipo_dato == "int") { // Verifica si el tipo de dato es entero
                        // Genera valores aleatorios para enteros en el rango de 0 a 100
                        uniform_int_distribution<int> dis_int(0, 100);
                        for (int i = 0; i < matriz1.getFilas(); ++i) {
                            for (int j = 0; j < matriz1.getColumnas(); ++j) {
                                int valor = dis_int(gen);
                                matriz1.setValor(i, j, valor);
                            }
                        }
                        cout << "Datos aleatorios generados para la primera matriz (enteros)." << endl;

                        // Genera valores aleatorios para la segunda matriz
                        for (int i = 0; i < matriz2.getFilas(); ++i) {
                            for (int j = 0; j < matriz2.getColumnas(); ++j) {
                                int valor = dis_int(gen);
                                matriz2.setValor(i, j, valor);
                            }
                        }
                        cout << "Datos aleatorios generados para la segunda matriz (enteros)." << endl;

                    } else if (tipo_dato == "float") { // Verifica si el tipo de dato es flotante
                        // Genera valores aleatorios para flotantes en el rango de 1.0 a 100.0
                        uniform_real_distribution<float> dis_float(1.0f, 100.0f);
                        for (int i = 0; i < matriz1.getFilas(); ++i) {
                            for (int j = 0; j < matriz1.getColumnas(); ++j) {
                                float valor = dis_float(gen);
                                matriz1.setValor(i, j, valor);
                            }
                        }
                        cout << "Datos aleatorios generados para la primera matriz (flotantes)." << endl;

                        // Genera valores aleatorios para la segunda matriz
                        for (int i = 0; i < matriz2.getFilas(); ++i) {
                            for (int j = 0; j < matriz2.getColumnas(); ++j) {
                                float valor = dis_float(gen);
                                matriz2.setValor(i, j, valor);
                            }
                        }
                        cout << "Datos aleatorios generados para la segunda matriz (flotantes)." << endl;

                    } else if (tipo_dato == "std::complex") { // Verifica si el tipo de dato es complejo
                        // Genera valores complejos aleatorios
                        uniform_real_distribution<> dis_real(0.0, 10.0); // Distribución uniforme para la parte real en el rango de 0.0 a 10.0
                        uniform_real_distribution<> dis_imaginary(0.0, 10.0); // Distribución uniforme para la parte imaginaria en el rango de 0.0 a 10.0
                        for (int i = 0; i < matriz1.getFilas(); ++i) {
                            for (int j = 0; j < matriz1.getColumnas(); ++j) {
                                double real = dis_real(gen); // Genera un valor real aleatorio
                                double imaginary = dis_imaginary(gen); // Genera un valor imaginario aleatorio
                                matriz1.setValor(i, j, complex<double>(real, imaginary)); // Establece el valor complejo en la matriz
                            }
                        }
                        cout << "Datos aleatorios generados para la primera matriz." << endl;

                        // Genera valores complejos aleatorios para la segunda matriz
                        for (int i = 0; i < matriz2.getFilas(); ++i) {
                            for (int j = 0; j < matriz2.getColumnas(); ++j) {
                                double real = dis_real(gen); // Genera un valor real aleatorio
                                double imaginary = dis_imaginary(gen); // Genera un valor imaginario aleatorio
                                matriz2.setValor(i, j, complex<double>(real, imaginary)); // Establece el valor complejo en la matriz
                            }
                        }
                        cout << "Datos aleatorios generados para la segunda matriz." << endl;
                    } else {
                        cout << "El tipo de dato seleccionado no es válido para la generación aleatoria." << endl;
                    }
                }
                break;
            }
            case 4: { // Opción para mostrar las matrices ingresadas
                cout << "Matriz 1:" << endl;
                matriz1.mostrarMatriz(); // Muestra la primera matriz
                cout << "Matriz 2:" << endl;
                matriz2.mostrarMatriz(); // Muestra la segunda matriz
                break;
            }
            case 5: { // Opción para seleccionar la operación a realizar
                cout << "\nSeleccione la operación a realizar:" << endl;
                cout << "1. Suma" << endl;
                cout << "2. Resta" << endl;
                cout << "3. Multiplicación" << endl;
                cout << "Ingrese su opción: ";
                cin >> operacion; // Lee la opción de operación seleccionada por el usuario
                cout << "Operacion seleccionada correctamente..." << endl;
                break;
            }
            case 6: { // Opción para ejecutar la operación seleccionada
                if (operacion != 0) { // Verifica si se ha seleccionado una operación
                    switch (operacion) { // Inicia un switch para manejar las diferentes operaciones
                        case 1: { // Suma de matrices
                            try {
                                OperacionesBasicas<std::complex<double>>::validarSumaResta(matriz1, matriz2); // Valida la operación de suma
                                Matriz<std::complex<double>> resultado_suma = OperacionesBasicas<std::complex<double>>::suma(matriz1, matriz2); // Realiza la suma de matrices
                                cout << "La suma de las matrices es:" << endl;
                                resultado_suma.mostrarMatriz(); // Muestra el resultado de la suma
                            } catch (const std::invalid_argument& e) {
                                cerr << "Error: " << e.what() << endl; // Imprime un mensaje de error si se produce una excepción
                            }
                            break;
                        }
                        case 2: { // Resta de matrices
                            try {
                                OperacionesBasicas<std::complex<double>>::validarSumaResta(matriz1, matriz2); // Valida la operación de resta
                                Matriz<std::complex<double>> resultado_resta = OperacionesBasicas<std::complex<double>>::resta(matriz1, matriz2); // Realiza la resta de matrices
                                cout << "La resta de las matrices es:" << endl;
                                resultado_resta.mostrarMatriz(); // Muestra el resultado de la resta
                            } catch (const std::invalid_argument& e) {
                                cerr << "Error: " << e.what() << endl; // Imprime un mensaje de error si se produce una excepción
                            }
                            break;
                        }
                        case 3: { // Multiplicación de matrices
                            try {
                                OperacionesBasicas<std::complex<double>>::validarMultiplicacion(matriz1, matriz2); // Valida la operación de multiplicación
                                Matriz<std::complex<double>> resultado_multiplicacion = OperacionesBasicas<std::complex<double>>::multiplicacion(matriz1, matriz2); // Realiza la multiplicación de matrices
                                cout << "La multiplicación de las matrices es:" << endl;
                                resultado_multiplicacion.mostrarMatriz(); // Muestra el resultado de la multiplicación
                            } catch (const std::invalid_argument& e) {
                                cerr << "Error: " << e.what() << endl; // Imprime un mensaje de error si se produce una excepción
                            }
                            break;
                        }
                    }
                } else {
                    cout << "Primero seleccione una operación en el caso 5." << endl;
                }
                break;
            }
            case 7: { // Opción para salir del programa
                cout << "Saliendo del programa..." << endl;
                return 0; // Termina el programa al salir del bucle while
            }
            default: { // Opción por defecto para manejar una entrada inválida
                cout << "Opción inválida. Inténtelo de nuevo." << endl;
                break;
            }
        }
    }

    return 0; 
}
