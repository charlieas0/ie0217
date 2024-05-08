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
    Matriz<std::complex<double>> matriz1(0, 0), matriz2(0, 0);

    string tipo_dato;
    int opcion;
    int operacion = 0; // Declaración fuera del while principal

    while (true) {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int filas, columnas;

                cout << "Ingrese el número de filas: ";
                cin >> filas;
                cout << "Ingrese el número columnas de las matrices: ";
                cin >> columnas;
                ValidadorDeEntrada::validarDimensiones(filas);
                ValidadorDeEntrada::validarDimensiones(columnas);

                // Inicializar matrices con el tamaño dado
                matriz1 = Matriz<std::complex<double>>(filas, columnas);
                matriz2 = Matriz<std::complex<double>>(filas, columnas);

                // Llenar las matrices con valores ingresados por el usuario
                matriz1.llenarMatriz();
                matriz2.llenarMatriz();
                break;
            }
            case 2: {
                cout << "Ingrese el tipo de dato para las matrices (int, float, std::complex): ";
                cin >> tipo_dato;
                try {
                    ValidadorDeEntrada::validarTipoDato(tipo_dato);
                } catch (const std::invalid_argument& e) {
                    cerr << "Error: " << e.what() << endl;
                }
                break;
            }
       case 3: {
    if (tipo_dato.empty()) {
        cout << "Primero seleccione el tipo de dato para las matrices." << endl;
    } else {
        random_device rd;
        mt19937 gen(rd());

        if (tipo_dato == "int") {
            // Generación de valores aleatorios para enteros
            uniform_int_distribution<int> dis_int(0, 100); // Rango de 0 a 100, puedes ajustarlo según sea necesario
            for (int i = 0; i < matriz1.getFilas(); ++i) {
                for (int j = 0; j < matriz1.getColumnas(); ++j) {
                    int valor = dis_int(gen);
                    matriz1.setValor(i, j, valor);
                }
            }
            cout << "Datos aleatorios generados para la primera matriz (enteros)." << endl;

            // Generación de valores aleatorios para la segunda matriz
            for (int i = 0; i < matriz2.getFilas(); ++i) {
                for (int j = 0; j < matriz2.getColumnas(); ++j) {
                    int valor = dis_int(gen);
                    matriz2.setValor(i, j, valor);
                }
            }
            cout << "Datos aleatorios generados para la segunda matriz (enteros)." << endl;

        } else if (tipo_dato == "float") {
            // Generación de valores aleatorios para flotantes
            uniform_real_distribution<float> dis_float(1.0f, 100.0f); // Rango de 0.0 a 100.0, puedes ajustarlo según sea necesario
            for (int i = 0; i < matriz1.getFilas(); ++i) {
                for (int j = 0; j < matriz1.getColumnas(); ++j) {
                    float valor = dis_float(gen);
                    matriz1.setValor(i, j, valor);
                }
            }
            cout << "Datos aleatorios generados para la primera matriz (flotantes)." << endl;

            // Generación de valores aleatorios para la segunda matriz
            for (int i = 0; i < matriz2.getFilas(); ++i) {
                for (int j = 0; j < matriz2.getColumnas(); ++j) {
                    float valor = dis_float(gen);
                    matriz2.setValor(i, j, valor);
                }
            }
            cout << "Datos aleatorios generados para la segunda matriz (flotantes)." << endl;

        } else if (tipo_dato == "std::complex") {
            // Generación de valores complejos aleatorios
            uniform_real_distribution<> dis_real(0.0, 10.0);
            uniform_real_distribution<> dis_imaginary(0.0, 10.0);
            for (int i = 0; i < matriz1.getFilas(); ++i) {
                for (int j = 0; j < matriz1.getColumnas(); ++j) {
                    double real = dis_real(gen);
                    double imaginary = dis_imaginary(gen);
                    matriz1.setValor(i, j, complex<double>(real, imaginary));
                }
            }
            cout << "Datos aleatorios generados para la primera matriz." << endl;

            // Generación de valores complejos aleatorios para la segunda matriz
            for (int i = 0; i < matriz2.getFilas(); ++i) {
                for (int j = 0; j < matriz2.getColumnas(); ++j) {
                    double real = dis_real(gen);
                    double imaginary = dis_imaginary(gen);
                    matriz2.setValor(i, j, complex<double>(real, imaginary));
                }
            }
            cout << "Datos aleatorios generados para la segunda matriz." << endl;
        } else {
            cout << "El tipo de dato seleccionado no es válido para la generación aleatoria." << endl;
        }
    }
    break;
}



            case 4: {
                // Mostrar las matrices ingresadas
                cout << "Matriz 1:" << endl;
                matriz1.mostrarMatriz();
                cout << "Matriz 2:" << endl;
                matriz2.mostrarMatriz();
                break;
            }
            case 5: {
                // Código del caso 5...
                cout << "\nSeleccione la operación a realizar:" << endl;
                cout << "1. Suma" << endl;
                cout << "2. Resta" << endl;
                cout << "3. Multiplicación" << endl;
                cout << "Ingrese su opción: ";
                cin >> operacion; // Leer la opción del usuario

                cout << "Operacion seleccionada correctamente..." << endl;
                break; // Este break debe estar dentro del switch
            }
            case 6: {
                // Ejecutar la operación seleccionada
                if (operacion != 0) {
                    switch (operacion) {
                        case 1: {
                            try {
                                OperacionesBasicas<std::complex<double>>::validarSumaResta(matriz1, matriz2);
                                Matriz<std::complex<double>> resultado_suma = OperacionesBasicas<std::complex<double>>::suma(matriz1, matriz2);
                                cout << "La suma de las matrices es:" << endl;
                                resultado_suma.mostrarMatriz();
                            } catch (const std::invalid_argument& e) {
                                cerr << "Error: " << e.what() << endl;
                            }
                            break;
                        }
                        case 2: {
                            try {
                                OperacionesBasicas<std::complex<double>>::validarSumaResta(matriz1, matriz2);
                                Matriz<std::complex<double>> resultado_resta = OperacionesBasicas<std::complex<double>>::resta(matriz1, matriz2);
                                cout << "La resta de las matrices es:" << endl;
                                resultado_resta.mostrarMatriz();
                            } catch (const std::invalid_argument& e) {
                                cerr << "Error: " << e.what() << endl;
                            }
                            break;
                        }
                        case 3: {
                            try {
                                OperacionesBasicas<std::complex<double>>::validarMultiplicacion(matriz1, matriz2);
                                Matriz<std::complex<double>> resultado_multiplicacion = OperacionesBasicas<std::complex<double>>::multiplicacion(matriz1, matriz2);
                                cout << "La multiplicación de las matrices es:" << endl;
                                resultado_multiplicacion.mostrarMatriz();
                            } catch (const std::invalid_argument& e) {
                                cerr << "Error: " << e.what() << endl;
                            }
                            break;
                        }
                    }
                } else {
                    cout << "Primero seleccione una operación en el caso 5." << endl;
                }
                break;
            }
            case 7: {
                // Salir del programa
                cout << "Saliendo del programa..." << endl;
                return 0; // Terminar el programa al salir del bucle while
            }
            default: {
                cout << "Opción inválida. Inténtelo de nuevo." << endl;
                break;
            }
        }
    }

    return 0;
}
