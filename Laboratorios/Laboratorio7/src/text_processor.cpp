#include"text_processor.hpp"
#include<fstream>
#include<regex>


TextProcessor::TextProcessor(const std::string& input_filename,const std::string& output_filename)
:input_filename(input_filename), output_filename(output_filename){}

void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string)
{
    std::ifstream input_file(input_filename); // Abre el archivo de entrada
    std::ofstream output_file(output_filename); // Abre el archivo de salida
    std::string line;

    std::regex pattern(search_pattern); // Crea un objeto regex a partir del patrón de búsqueda

    if (input_file && output_file) { // Verifica si los archivos se abrieron correctamente
        while (getline(input_file, line)) // Lee cada línea del archivo de entrada
        {
            std::string replaced = std::regex_replace(line, pattern, replace_string); // Realiza el reemplazo en la línea actual
            output_file << replaced << "\n"; // Escribe la línea modificada en el archivo de salida
        }
    }
}
