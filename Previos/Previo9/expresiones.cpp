#include <iostream>
#include <regex>

using namespace std;

int main() {
    // Definir la expresión regular que se buscará en el texto
    auto const regex = std::regex("(my|your)regex");

    // Texto de ejemplo 1: contiene "myregex"
    auto const myText = std::string("A piece if text that contains myregex.");
    // Buscar la expresión regular en el texto de ejemplo 1
    bool const myTextContainsRegex = std::regex_search(myText, regex);

    // Texto de ejemplo 2: contiene "yourregex"
    auto const yourText = std::string("A piece if text that contains yourregex.");
    // Buscar la expresión regular en el texto de ejemplo 2
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    // Texto de ejemplo 3: no contiene ninguna de las palabras buscadas
    auto const theirText = std::string("A piece if text that contains their regex.");
    // Buscar la expresión regular en el texto de ejemplo 3
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    // Imprimir los resultados de la búsqueda para cada texto
    std::cout << std::boolalpha
              << "Texto 1 contiene la expresión regular: " << myTextContainsRegex << "\n"
              << "Texto 2 contiene la expresión regular: " << yourTextContainsRegex << "\n"
              << "Texto 3 contiene la expresión regular: " << theirTextContainsRegex << "\n";

    return 0;
}
