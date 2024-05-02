#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

// Definición de una plantilla de clase para calcular estadísticas
template <typename T>
class Statistics {
public:
    // Constructor que toma un vector de datos y lo almacena
    Statistics(const std::vector<T>& data) : data(data) {
        // Se verifica que el vector de datos no esté vacío
        if (data.empty()) {
            throw std::invalid_argument("La lista de datos debe contener elementos");
        }
    };

    // Función para calcular la media del conjunto de datos
    double mean() const {
        T sum = 0;
        // Iteración sobre los elementos del vector y cálculo de la suma
        for (const T& value : data) {
            sum += value;
        }
        // Devolución de la media
        return static_cast<double>(sum) / data.size();
    };

    // Función para calcular la desviación estándar del conjunto de datos
    double standardDeviation() const {
        // Cálculo de la media utilizando la función mean()
        double meanValue = mean();
        double sumSquares = 0;

        // Iteración sobre los elementos del vector y cálculo de la suma de cuadrados
        for (const T& value : data) {
            sumSquares += (value - meanValue) * (value - meanValue);
        }
        // Devolución de la desviación estándar
        return std::sqrt(sumSquares / data.size());
    };

private:
    std::vector<T> data; // Vector para almacenar los datos
};

int main() {
    try {
        // datos de tipo entero
        std::vector<int> intData = {1, 2, 3, 4, 5};
        Statistics<int> statsInt(intData); // Creación del objeto Statistics

        // Cálculo y muestra de la media y la desviación estándar
        std::cout << "Media de intData: " << statsInt.mean() << std::endl;
        std::cout << "Desviacion estandar de intData: " << statsInt.standardDeviation() << std::endl;

        // datos de tipo double
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};
        Statistics<double> statsDouble(doubleData); // Creación del objeto Statistics

        // Cálculo y muestra de la media y la desviación estándar
        std::cout << "Media de doubleData: " << statsDouble.mean() << std::endl;
        std::cout << "Desviacion estandar de doubleData: " << statsDouble.standardDeviation() << std::endl;

        // Prueba con un vector de datos vacío
        std::vector<int> emptyData;
        Statistics<int> statsEmpty(emptyData); // Creación del objeto Statistics
    } catch(const std::invalid_argument& e) {
        // Manejo de excepciones si se pasa un vector vacío
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl;
    }
    return 0;
}
