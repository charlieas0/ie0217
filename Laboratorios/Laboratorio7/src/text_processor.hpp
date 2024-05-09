#ifndef TEXT_PROCESSOR.HPP
#define TEXT_PROCESOR.HPP
#include<string>
// Definición de la clase TextProcessor
class TextProcessor{
    private:
        std::string input_filename; // Nombre del archivo de entrada
        std::string output_filename; // Nombre del archivo de salida

    public:
        // Constructor de la clase
        TextProcessor(const std::string& input_filename, const std::string& output_filename);

        // Función para reemplazar texto
        void replace(const std::string& search_pattern, const std::string& replace_pattern);
};

#endif