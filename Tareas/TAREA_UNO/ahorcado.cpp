/*
Charlie Arroyo
B90765
UCR

*/
// Importante bibliotecas y archivos .hpp
#include "ahorcado.hpp"
#include <cstdlib>
#include <ctime>
#include"pantalla.hpp"
#include<iostream>
using namespace std;



void inicializar(Ahorcado& juego, const std::string palabras[], int numPalabras, int intento_max) {
    // Generando números aleatorios
    srand(time(0));
    // Tomar alguna palabra del diccionario
    int indice = rand() % numPalabras;
    juego.palabra_adivinar = palabras[indice];

    // Inicializando el estado actual con guion bajo
    juego.est_actual = std::string(juego.palabra_adivinar.length(), '-');

    // Los intentos máximos
    juego.intentos_max = intento_max;

    // Generando el número actual de los intentos actuales
    juego.intentos_actuales = 0;
}

void adivinarLetra(Ahorcado& juego, char letra) {
    // Verificar si la letra está presente en la palabra a adivinar
    bool letraEncontrada = false;
    for (int i = 0; i < juego.palabra_adivinar.length(); ++i) {
        if (juego.palabra_adivinar[i] == letra) {
            // Si la letra está presente, actualizar el estado actual
            juego.est_actual[i] = letra;
            letraEncontrada = true;
        }
    }

    // Si la letra no fue encontrada, incrementar los intentos actuales
    if (!letraEncontrada) {
        juego.intentos_actuales++;
    }
}

bool verificarAdivinanza(Ahorcado& juego) {
    // Verificar si la palabra ha sido adivinada correctamente
    if (juego.palabra_adivinar == juego.est_actual) {
        std::cout << "¡Felicidades! Has adivinado la palabra correctamente: " << juego.palabra_adivinar << std::endl;
        return true; // Juego terminado correctamente
    }

    // Verificar si se han agotado los intentos permitidos
    if (juego.intentos_actuales >= juego.intentos_max) {
        std::cout << "¡Oh no! Has agotado todos tus intentos. La palabra correcta era: " << juego.palabra_adivinar << std::endl;
        return true; // Juego terminado por agotar los intentos
    }

    // El juego no ha terminado aún
    return false;
}

//funcion para el juego
void jugarJuego(Ahorcado& juego) {
    char letra;
    while (!verificarAdivinanza(juego)) {
        std::cout << "Estado actual: " << juego.est_actual << std::endl;
        std::cout << "Intentos máximos permitidos: " << juego.intentos_max << std::endl;
        std::cout << "Intentos actuales realizados: " << juego.intentos_actuales << std::endl;
        std::cout << "Ingresa una letra: ";
        std::cin >> letra;
        adivinarLetra(juego, letra);
    }
}




/*-----Menu-------*/

// Función para mostrar el men
void mostrarMenu() {
    cout << "\t---Bienvenido/a al Menú---" << endl;
    cout << "1) Elegir la dificultad del juego." << endl;
    cout << "2) Iniciar el juego." << endl;
    cout << "3) Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << endl;
    cout << "4) Ver el directorio de palabras." << endl;
    cout << "5) Salir." << endl;
    cout << "Por favor, seleccione una opción: ";
}


// Variable global
string nuevaPalabra;

// Función para el menú interactivo
void menu(Ahorcado& juego,int& intentos_maximos, string palabras[], int& numPalabras) {
    char eleccion;
    while (true) {

        mostrarMenu();
        cin >> eleccion;

        switch (eleccion) {
                case '1':
                    limpiar();
                    // Lógica para elegir la dificultad del juego
                    cout << "Seleccione la dificultad del juego:" << endl;
                    cout << "1. Fácil (7 intentos)" << endl;
                    cout << "2. Intermedio (5 intentos)" << endl;
                    cout << "3. Difícil (3 intentos)" << endl;
                    cout << "Ingrese su elección: ";
                    char dificultad;
                    cin >> dificultad;
                        switch (dificultad) {
                            case '1':
                            intentos_maximos = 7;
                            break;
                            case '2':
                            intentos_maximos = 5;
                            break;
                            case '3':
                           intentos_maximos = 3;
                            break;
                            default:
                                cout << "Opción inválida. Se establecerán 7 intentos por defecto." << endl;
                            intentos_maximos = 7;
                            break;
                        }
                    inicializar(juego, palabras, numPalabras, intentos_maximos);
                break;
            case '2':
                // Lógica para iniciar el juego
                    jugarJuego(juego);
                    espera();
                    limpiar();
                break;
            case '3':
            
                // Lógica para agregar palabras al arreglo de palabras
                cout << "Ingrese la nueva palabra: ";
                cin >> nuevaPalabra;
                palabras[numPalabras] = nuevaPalabra;
                numPalabras++;
                cout << "Palabra agregada exitosamente." << endl;
                espera();
                limpiar();
                break;
            case '4':
                // Lógica para ver el directorio de palabras
                for (int i = 0; i < numPalabras; ++i) {
                    cout << palabras[i] << endl;
                }
                espera();
                limpiar();
                break;
            case '5':
                return; // Terminar la función si se selecciona salir
            default:
                cout << "OPCIÓN NO VÁLIDA. Intente de nuevo.." << endl;
                break;
        }
    }
}