# ie0217
## Tarea1

## Parte práctica.
Puede ejecutar el codigo de la siguiente manera en terminal:






## Parte teórica:
1. **¿Qué es la programación orientada a objetos y cuáles son sus principales principios?**

La programación orientada a objete se basa en generar tipos de datos llamados, objetos, por lo que podemos tratarlo como un modulo con dos partes, propiedades y funciones, a los datos o propiedades se le puede ver como atributos y a las funciones como método. 
Partiendo de que los atributos son las propiedades que definen al objeto, mientras que los métodos son las acciones que puede realizar.

La programación orientada a objetos está sostenida por 4 pilares, una de ellas es la **abstracción**, al hacer una clase hay que definir los atributos y los métodos, si queremosa saber por ejemplo que es una cancion no es se necesita incluir todas las carácteristicas, sino solo las necesarias.

Otro de sus pilares es la encapsulación, que se basa en generar un programa con varias clases que se comuniquen entre sí, conocido como modularidad, es util ya que es más fácil detectar errores y el encapsulado es que podemos definir que será privado y que no para evitar problemas en el código.

Herencia es el otro, imagina que se desea generar la clase guerrero y la clase mago, pero ya se tiene una clase personaje, por lo que se hereda para ambas clases lo que se conoce como la clase padre y las que reciben el código clase hija y a esta se le agrega otras especificaciones.

Y el último pilar de OOP, es el polimorfismo, este se encarga de permitir que un método sea diferente dependiendo de la clase que lo usa, por lo que se puede usar de muchas formas.


2. **Explique el concepto de ocultamiento de datos y cómo se logra en C++.**

El ocultamiento de datos, en C++ también es conocido como encapsulado y lo que hace es ocultar detalles de implementación de un objeto. En C++ se logra utilizando las clases y definiendo los miembros como”public, private, protected"

3. **¿Cuál es la diferencia entre una clase y un objeto en C++?**

La diferencia principal es que la clase es cómo un esqueleto o una pantalla abstracta que funciona para definir el objeto mientras que el objeto sí es una instancia que existe en la clase y tiene valores según sus atributos.

4. **¿Qué es el polimorfismo y cómo se logra en C++?**

El polimorfismo en c++ se encarga de hacer que un objeto pueda comportarse diferente según el contexto que se utiliza.

5. **¿Qué significa el término encapsulamiento en el contexto de la OOP?**

El término encapsulamiento en el contexto de OOP, siginifica toda aquella agrupación de atributos y métodos relacionados al objeto que están contenidos en una clase.

6. **¿Cuál es el propósito del constructor y el destructor en una clase de C++?**

El próposito del constructor es que genera la inicialización del objeto, mientras que el destructor más bien se encarga de limpiar el objeto.

7. **¿Investigue cómo se define una clase abstracta en C++ y cuál es su función?**

La clase abstracta en C++ es aquella que tiene al menos un método virtual puro dentro de la clase.
'''class abstac{
    // atributos

    // virtual
    virtual double calcularX() const = 0;
}'''


8. **¿Investigue qué es un constructor de copia y para qué se utiliza en C++?**

Un constructor copia en c++ se encarga de crear copias de objetos, es básicamente un método de una clase que se utiliza cuando se crea un objeto de uno que ya existía antes.

Se utiliza para pasar objetos, asignar objetos o para generar colecciones de objetos en listas o arrays.

9. **¿Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian?**
El polimorfismo estático se produce en tiempo de compilación y se basa en la herencia y sobrecarga de funciones, mientras que el dinámico opera en tiempo de ejecución y este más bien se centra en punteros a funciones y enlaces virtuales.

10. **¿Qué son las clases anidadas y cuál es su utilidad en C++?**

Las clases anidades son aquellas en donde una clase se define dentro de otra clase y su utilidad es que permite un mejor ordenamiento del código y permite encapsular la implementación.

11. **En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden**
**utilizar los punteros para trabajar con objetos y clases? Explique también por qué los**
**punteros a objetos son útiles en la programación orientada a objetos.**

En programación orientada a objetos de C++ los punteros se encargan de almacernar la dirección de memoria de un objeto, por lo que resulta muy útil ya que permite acceder a los miembros del objeto de forma más eficiente.

12. **¿Qué es una función prototipo?**

Una función prototipo se encarga de generar una estructura de la la función antes de ser definida realmente, es como una especie de plantilla, que describe el uso de la función.

13. **¿Explique los diferentes tipos de miembros que existen en la OOP?**

Exites varios tipos, los principales son:
a. Los atributos:
Estás son varibales asociadas a una clase y lo que se encargan es de darle caracteristicas o describir el estado del objeto.

b. Métodos:
Son aquellas funciones que están asociados a las clases y se encargan más bien de describir "acciones" que ejecutan los objetos.

c. Constructores:
Son métodos especiales que se utilizan más bien para inicializar un objeto cuando se forma una instancia en una clase.

d. Destructor:
Este más bien se utiliza para limpiar recursos.

14. **¿Qué es un memory leak?**

Un memory leak, es una "fuga" en memoria, que es producida cuando se presenta un problema en el software debido a que un programa no está liberando la memoria que ya no necesita, esto puede suceder hasta que se acabe la memoria dispoble.

Esto no sólo llena toda la memoria, sino también genera un menor rendimiento del programa, por lo que puede tardar más en ejecutarse.

15. **¿Qué es y cuál es la importancia de la Herencia multinivel, míltiple y jerárquica de**
**C+?**

La herencia multinivel es cuando una clase hereda de otra clase y la misma hereda otra clase.
Y su importancia es que permite crear reutilizar código de la clase base, y en las clases hijas se pueden agregar diferentes caráteristicas.

16. **¿Qué es la composición y cómo se implementa en C++?**

La composición en OOP es cuando un objeto, está compuesto por otros objetos de otras clases.
En C++ la composición se utiliza generando instanciaciones de otras clases dentro de la clase.

17. **¿Qué es la sobreescritura de funciones en C++ y cuando es bueno usarla?**

La sobreescritura de funciones en C++ se utiliza para generar funciones con el mismo nombre pero con diferentes tipos de argumentos dentro de sus funciones y es bueno usarlo ya que es una buena práctica, porque mejora visualmente el código y la duplicabilidad del mismo.

18. **¿Qué es un método y un atributo y cuál es la diferencia entre ellos?**

Un método es la acción del objeto, mientras que el atributo es más bien las carácteristicas del objeto dentro de la clase.

19. **¿Qué es el constructor y el destructor en una clase?**

Constructores:
Son métodos especiales que se utilizan más bien para inicializar un objeto cuando se forma una instancia en una clase.

Destructor:
Este más bien se utiliza para limpiar recursos.

20. **¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?**

La sobrecarga de operadores en C++ lo que hace es permitir o redefinir el signidicado de diferente operandos y se utiliza  sobrecargando un operador generando una función miembro con el mismo nombre.