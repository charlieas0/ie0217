# ie0217
## Tarea3
## Charlie Arroyo. B90765
## Parte práctica.
Puede ejecutar el codigo de la siguiente manera en terminal:

```
g++ hash_table.cpp main.cpp lista_enlazada.cpp -o contactos.txt

// Ejecutable:
./contactos.txt
```


# Parte teórica.

## 1. Templates:

**1. Definición de Templates: Explique el concepto de templates en C++ y**
**proporcione un ejemplo simple.**

Un template define una plantilla para crear clases o funciones que pueden aceptar tipos de datos diferentes como argumentos. 

Ejemplo:
```
Funcion que calcula el max de dos valores.

int max(int a, int b) {
    return (a > b) ? a : b;
}

Esta función funciona bien para enteros, pero si deseas encontrar el máximo entre dos números en punto flotante, tendrías que escribir una función diferente. Aquí es donde los templates son útiles:

template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

```
**2. Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con**
**plantillas en C++?**
Se sobrecarga si definimos multiples versiones de las plantillas con diferentes argumentos.
ejemplo:

```
// Versión genérica de la función plantilla
template<typename T>
T sum(T a, T b) {
    std::cout << "Suma genérica: ";
    return a + b;
}

// Sobrecarga de la función plantilla para trabajar con enteros
int sum(int a, int b) {
    std::cout << "Suma de enteros: ";
    return a + b;
}

// Sobrecarga de la función plantilla para trabajar con floats
float sum(float a, float b) {
    std::cout << "Suma de floats: ";
    return a + b;
}
```

**3. Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C****++.**

En C++, las plantillas se pueden utilizar para definir clases genéricas que pueden trabajar con diferentes tipos de datos. Esto permite escribir código que sea flexible y reutilizable para una amplia gama de tipos de datos. Hay dos formas principales de utilizar plantillas en la definición de clases: plantillas de clase y plantillas de miembro.

## 2. Excepciones:
**4. Manejo de Excepciones: Describa los bloques try, catch y throw y cómo**
**se utilizan para el manejo de excepciones en C++.**

Los bloques try, catch y throw se utilizan para manejar excepciones, lo que permite que un programa responda a situaciones excepcionales o errores de manera controlada.

**try:**
define un área de código en la que se pueden lanzar excepciones
```
try {
    // Código que puede lanzar excepciones
} 

```


**catch:** 
se utiliza para manejar excepciones lanzadas dentro del bloque try.
```
catch (TipoDeExcepcion1 excepcion) {

} 
catch (TipoDeExcepcion2 excepcion) {
    
}


```
**throw:** 
se utiliza para lanzar una excepción explícitamente desde cualquier parte del código.

```
throw Excepcion();

```


**5. Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y****proporciona ejemplos de situaciones en las que podrían ser**
**útiles.**
invalid_argument: Esta excepción se utiliza cuando se pasa un argumento a una función que no es válido.

out_of_range: Esta excepción se utiliza cuando se produce un error de índice fuera de rango, como acceder a un elemento en un contenedor que está más allá de sus límites.

runtime_error: Esta excepción se utiliza para errores que ocurren durante la ejecución del programa y que no se pueden predecir en tiempo de compilación.

**6. Política de Manejo de Excepciones: ¿Qué es una política de manejo de**
**excepciones y por qué es importante considerarla al diseñar software?**

Una política de manejo de excepciones es un conjunto de reglas que definen cómo se deben manejar las excepciones dentro de un sistema de software. Estas políticas especifican qué tipo de excepciones deben ser lanzadas y como deben ser manejadas las mismas.

Es importante considerarla para diseñar software para garantizar que un sistema de software sea robusto, seguro, fácil de entender y mantener, y eficiente en términos de rendimiento.





**7. Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza**
****en C++.**

La palabra clave noexcept en C++ se utiliza para especificar que una función no arrojará excepciones durante su ejecución, con el fin de mejorar la eficiencia y el rendimiento del código.

En C++ se utiliza para especificar que una función o una expresión no lanzará excepciones.

**8. Explique la diferencia entre las excepciones std::logic error y std::runtime error.**

std::logic_error se utiliza para errores que reflejan problemas en la lógica del programa mientras que std::runtime_error se utiliza para errores que surgen durante la ejecución normal del programa.
**9. Explique qué ocurre cuando una excepción no es capturada.**
Cuando una excepción no es capturada, ocurre lo que se conoce como "excepción no manejada" y lo que puede suceder es que se finalice el programa, o que se pierdan recursos, por lo que es recomendo hacer buen uso de las excepciones para no generar este tipo de errores.

## 3. STL (Standard Template Library):


**10. Contenedores STL: Nombre cinco contenedores diferentes de la STL y**
**explique brevemente en qué situaciones seria apropiado usar cada uno.**


std::vector 
Apropiado cuando necesitas una colección de elementos que crezca o disminuya de tamaño de manera dinámica, y cuando necesitas acceso rápido a los elementos mediante índices.


std::list  
Funciona cuando se necesita realizar operaciones de inserción y eliminación frecuentes en cualquier posición de la lista, ya que estas operaciones tienen complejidad O(1).

std::map 
Apropiado cuando se necesita una estructura de datos para buscar, insertar y eliminar elementos basados en una clave única.

std::set 
este funciona mejor cuando necesita mantener una colección de elementos únicos y realizar operaciones de búsqueda, inserción y eliminación eficientes.

std::queue 
Es recomendado cuando se necesita realizar operaciones de encolado (push) y desencolado (pop) de elementos en el mismo extremo de la cola.



**11. Iteradores en STL: Explique el concepto de iteradores en la STL y cómo**
**se utilizan para acceder a elementos en contenedores.**

Los iteradores de (STL) en C++, proporcionando una interfaz uniforme para acceder y manipular los elementos dentro de los contenedores. Un iterador es un objeto que actúa como un puntero, apuntando a una posición específica dentro de un contenedor.

Se utilizan en C++ para operar en datos estructurados de manera eficiente y flexible.


**12. Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la**
**STL y describa sus funciones básicas.**



std::sort:
```
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 8, 1, 3};
    std::sort(vec.begin(), vec.end()); // Ordena el vector en orden ascendente

    for (const auto& num : vec) {
        std::cout << num << " "; // Imprime: 1 2 3 5 8
    }
    std::cout << std::endl;
    return 0;
}

```

std::find:
```

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto it = std::find(vec.begin(), vec.end(), 3); // Busca el valor 3 en el vector

    if (it != vec.end()) {
        std::cout << "Elemento encontrado en la posición: " << std::distance(vec.begin(), it) << std::endl; // Imprime: 2
    } else {
        std::cout << "Elemento no encontrado" << std::endl;
    }
    return 0;
}

```

std::copy:
Función: Copia los elementos de un rango dado a otro rango.

```
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2(5); // Vector de destino

    std::copy(vec1.begin(), vec1.end(), vec2.begin()); // Copia los elementos de vec1 a vec2

    std::cout << "Elementos de vec2: ";
    for (const auto& num : vec2) {
        std::cout << num << " "; // Imprime: 1 2 3 4 5
    }
    std::cout << std::endl;
    
    return 0;
}

```
**13. Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?**

La manera de usar un algoritmo personalizado con la STL de C++ es definiendo la propia función o función objeto y luego pasándola como argumento a los algoritmos estándar de la STL.