#include<iostream>
#include"text_processor.hpp"


int main(int argc, char* argv[]) {
    if (argc < 9) { // Verifica si se proporcionan suficientes argumentos de línea de comandos
        std::cerr << "Usage: " << argv[0] << " -f <filename> -o <outputfile> -search <search_pattern> -replace <replace_string>\n"; // Imprime un mensaje de uso en stderr
        return 1; // Retorna un código de error
    }

    // Extrae los argumentos de línea de comandos
    std::string filename = argv[2]; // Nombre del archivo de entrada
    std::string outputfile = argv[4]; // Nombre del archivo de salida
    std::string search_pattern = argv[6]; // Patrón de búsqueda
    std::string replace_string = argv[8]; // Cadena de reemplazo

    // Crea un objeto TextProcessor con los nombres de los archivos de entrada y salida
    TextProcessor processor(filename, outputfile);
    // Realiza el reemplazo en el archivo de entrada y escribe el resultado en el archivo de salida
    processor.replace(search_pattern, replace_string);

    return 0; // Retorna 0 para indicar que el programa se ejecutó correctamente
}
