# ie0217
## Tarea3

## Parte práctica.
Puede ejecutar el codigo de la siguiente manera en terminal:

```
g++ hash_table.cpp main.cpp lista_enlazada.cpp -o contactos.txt

// Ejecutable:
./contactos.txt
```


## Parte teórica.
**1. ¿Qué es un algoritmo y cuáles son sus características principales?**

Un algoritmo puede tomarse como un conjunto de instrucciones que se ejecutan poco a poco 
hasta resolver un determinado problema.

Y sus características principales estan basadas en estructurar el problema en una 
solución de pasos finita, siendo claro y específico en la implementación del mismo, asi 
como generar de manera efectiva, en un tiempo considerable en el que el problema se resuelve.

**2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.**

La mayor diferencia entre un algoritmo eficiente y uno inificiente, está basado en que 
el eficiente es aquel que resuelve el problema de una manera rápida y sin tener que utilizar una cantidad excesiva de recursos, mientras que los ineficientes son aquellos en los que el tiempo y los recursos son excesivos.


**3. ¿Qué es una estructura de datos y por qué son importantes?**

La estructura de datos es la manera efectiva de poder almacenar y ordenar datos de forma organizada
en una computadora para poder acceder de una manera fácil y eficiente.
 
La estructura de datos es importante en programacón ya que permite o dan lugar para
poder organizar y manipular datos de forma eficiente.


**4. Describe las diferencias entre una estructura de datos estática y una dinámica.**

Las estructuras de datos estáticas tienen un tamaño fijo y asignan memoria estáticamente, mientras que las estructuras de datos dinámicas pueden cambiar de tamaño y asignan memoria dinámicamente durante la ejecución del programa. 



**5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como**
**C++, explique las operaciones que se pueden realizar?**

La memoria dinámica o memoria heap, es un área de memoria utilizada para asignar y liberar memoria de manera dinámica durante la ejecución de un programa. 

Y su forma de gestionarla es principalmente con "new" y "delete", aunque también se puede con la función "malloc".

**6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la**
**memoria estática?**

Ventajas:
La memoria dinámica permite asignar y liberar memoria según sea necesario durante la ejecución del programa, lo que proporciona flexibilidad en el tamaño de los datos que se pueden manejar lo que mejora la eficiencia en el uso de memoria ya que solo se utiliza la cantidad necesaria de memoria, 

Permite manejar grandes cantidades de datos que no se conocen de antemano o que pueden cambiar de tamaño durante la ejecución del programa.

También, puede adaptarse dinámicamente a cambios en los requisitos del programa, como la entrada de datos variables o la necesidad de liberar memoria cuando ya no se necesita.


Desventaja:
La gestión manual de la memoria dinámica puede ser propensa a errores, como fugas de memoria (memory leaks) o corrupción de datos, lo que puede hacer que esta manera se más compleja.

Ventajas de la memoria estática:

Simplicidad: La asignación de memoria estática es simple por lo que el acceso a datos en memoria estática tiende a ser más rápido que en memoria dinámica, ya que no implica la sobrecarga de asignación y liberación de memoria.

También, este tipo de memoria hace que el programa sea menos propenso a tener errores.

Desventajas de la memoria estática:

Limitaciones en el tamaño: El tamaño de la memoria estática se determina en tiempo de compilación y no puede cambiarse durante la ejecución del programa, lo que hace que no se puedan manejar tan bien los datos como en el dinámico.

Por otra parte, se desperdicia memoria que no es utilizada en el sistema, lo que hace que también sea menos flexible, ya que el programa no se adapta a cambios en tiempos de ejecución.

**7. Explique qué es un árbol binario y cuáles son sus principales características.**

Un árbol binario es una estructura de datos jerárquica en la que cada nodo tiene como máximo dos hijos. Cada nodo en un árbol binario puede tener cero, uno o dos hijos, es decir, un árbol binario es una estructura de datos jerárquica en la que cada nodo tiene como máximo dos hijos

Las principales características de un árbol binario son las siguientes:
 Tiene un nodo raíz que es el nodo de la parte superior del árbol, no tiene padre.

Están a su vez, los nodos internos que son aquello que tienen al menos un hijo y si no lo tiene más bien se le denominan como hojas.

Cada nodo en un árbol binario puede tener un subárbol izquierdo y un subárbol derecho, que a su vez son árboles binarios por sí mismos.



**8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?**

Una cola es una estructura de datos lineal que sigue el principio de "primero en entrar, primero en salir o bien conocido como FIFO, lo que quiere decir es que el primero en ser puesto en la cola son aquellos que son eliminados de primero también.

Bueno, comúnmente es utilizado en situaciones donde se requiere un ordenamiento de elementos según el orden de llegada, como el procesamiento de tareas, la gestión de recursos compartidos, el búfer en comunicaciones, entre otros...


**9. ¿Cuál es la diferencia entre una cola queue y una pila (stack)?**

La mayor diferencia es que mientras que una cola sigue el principio de FIFO y permite el acceso a los elementos en el orden en que fueron agregados, una pila sigue el principio de LIFO y permite el acceso a los elementos en el orden inverso al que fueron agregados.

**10. Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.**

El algoritmo de inserción en una tabla hash implica calcular la función hash del elemento, resolver colisiones si es necesario y luego insertar el elemento en la posición determinada.
Por lo que es fundamental para agregar elementos a la estructura de datos y distribuirlos eficientemente en las posiciones de la tabla hash.

**11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas**
**hash?**


La función de dispersión,  denominada como hash, es un algoritmo que toma una entrada (o 'clave') y devuelve una salida (o 'valor hash') de longitud fija, esta longitud fija es más corta que la original.


**12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?**

La complejidad temporal promedio de búsqueda en una tabla hash bien implementada es O(1), lo que significa que la búsqueda tiene un tiempo de ejecución constante en promedio.


**13. Explica cómo se realiza la operación de inserción (push) en una pila (stack).**

La inserción de pila(push) se implementa, al poner un nuevo elemento en la pila, básicamente,  la operación de inserción en una pila implica la creación de un nuevo elemento, su colocación en la cima de la pila y la actualización del puntero que indica la posición de la cima de la pila y moviendose entre otro elemento de la pila.. Esto asegura de usar el método LIFO.


**14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop)**
**en una pila?**

La complejidad temporal de las operaciones de apilar y desapilar en una pila, dependen de su implemantación, puede ser mediante una lista enlazada o un arreglo, realmente  tanto la operación de apilar (push) como la de desapilar (pop) en una pila tienen complejidad temporal O(1), a diferencia que en un arreglo hay que aplicar redireccionamiento.

**15. Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.**

Una lista enlazada es básicamente estructura de datos lineal que consiste en una secuencia de nodos, haciendo que cada nodo contenga un valor y una referencia (o puntero) al siguiente nodo en la secuencia.

Dentro de sus ventajas y desventajas las listas enlazadas son estructuras de datos flexibles y eficientes en cuanto a la inserción y eliminación de elementos, pero quizá no sea la mejor opción cuando se requiere acceso aleatorio a los elementos o bien, si se desea optimizar el uso de la memoria.





**16. ¿Qué es un nodo en una lista enlazada y qué contiene?**

Como se mencionó anteriormente un nodo en una lista enlazada contiene el dato que se desea almacenar y un enlace al siguiente nodo en la secuencia es decir, el puntero. Esta estructura  da paso a la construcción de listas enlazadas donde cada nodo está conectado al siguiente, que permite crear una estructura lineal.





**17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente**
**enlazada?**

La diferencia principal entre una lista enlazada simple y una lista enlazada doblemente enlazada está en la cantidad de enlaces que tiene cada nodo y la dirección en la que estos enlaces apuntan

**18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?**

Para eliminar una lista enlazada se debe ajustar los enlaces para saltar por asi decirlo en nodo que se desea eliminar y luego se libera la memoria que ocupa el nodo.

**19. Explica cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.**

El recorrido en un árbol binario implica visitar todos los nodos del árbol en un cierto orden. Los tres tipos principales de recorrido en un árbol binario son el recorrido en orden, el recorrido en preorden y el recorrido en postorden, todos estos lo recorren de manera distinta, pero en su implementación básica, si recorre todos


**20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden**
**en un árbol binario balanceado?**

la complejidad temporal de los recorridos en preorden, en orden y en postorden es lineal en función del número de nodos en el árbol, lo que significa que el tiempo de ejecución crece de manera proporcional al tamaño del árbol.

**21. Explique la diferencia entre la notación Big O (O) y la notación Omega () en el análisis**
**de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo**
**y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.**

Básicamente, la notación Big O (O) y la notación Omega () proporcionan información sobre el comportamiento del tiempo de ejecución de un algoritmo en diferentes situaciones, especialmente en el peor y el mejor de los casos, respectivamente. Utilizar ambas notaciones juntas puede brindar una comprensión más completa de la complejidad temporal de un algoritmo.

Sus diferencias están en que Big O representa la tasa de crecimiento máxima del tiempo de ejecución en relación con el tamaño de la entrada, en el peor de los casos, mientras que ka notación Omega representa la tasa de crecimiento mínima del tiempo de ejecución en relación con el tamaño de la entrada, en el mejor de los casos.

Un ejemplo puede ser buscar de manera lineal en un arreglo desordenado.

En su complejidad temporal, en el mejor de los casos encuentra de primero el elemento del arreglo "Omega" o en el peor de los casos está en el último elemento del mismo "Big O".