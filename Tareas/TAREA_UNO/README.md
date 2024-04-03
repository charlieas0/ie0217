# ie0217
## Tarea1

## Parte práctica.
Puede ejecutar el codigo de la siguiente manera en terminal:
```
 g++ main.cpp ahorcado.cpp pantalla.cpp -o juego.exe
// Ejecutarlo en la terminal.
./juego.exe
```
Es importante que tome en cuenta que el código
fue realizado en linux, por lo cual, si usa
windows para ejecutarlo, debe cambiar la función
"limpiar" y en lugar de colocar "clear" debe poner
"cls".



## Parte teórica:
1. **¿Cuál es la principal diferencia entre C y C++?**

La diferencia principal es que C de bajo nivel, se centra en la utilización de la memoria y la gestión manual, esto de manera procedimental, mientras tanto C++, está orientada a objetos, este lenguaje,   es más bien de nivel medio por lo que tiene un sistema de datos mas amplio que C.

2. **Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git**
**commit, git push, git pull, git clone, git branch, git merge.**

Git init sew encarga de iniciar un repositorio git en el repositorio actual y crea un archivo .git
Uso:
git init

git add se encarga de agregar archivos al área de preparación para que se añadan en el siguiente commit
Uso:
git add nombre de archivo
git add . // agrega todos los archivos modificados.

Git commit se encarga de tomar los cambios añadidos en un commit permanente
Uso:
git commit -m “mensaje”

git push se encarga más bien de enviar git locales al repositorio remoto.
Uso:
git push nombre repositorio nombre de la rama 

git pull más bien descarga los cambios que se hayan hecho en el repositorio remoto y  los une con la rama actúa
Uso:
git pull nombre del repositorio nombre rama


git clone se encarga de crear una copia local del repositorio remoto.
Uso:
git clone dirección https del repositorio


git Branch se encarga de crear una nueva rama para trabajar en paralelo con la rama principal “main”

Uso:
git Branch nombre_rama

git marge combina los cambios generados de una rama con la otra.
Uso:
git checkout nombre_rama_destino
git merge nombre_rama_origen

3. **¿Qué es Git y cuál es su prop´osito en el desarrollo de software?**

Git es básicamente un sistema de control de versiones distribuído y de código abierto, lo que significa que cada usualrio que realiza cambios en un proyecto, tiene acceso o una copia completa del código fuente en el equipo local.
Su próposito es rastrear y gestionar los cambios realizados al código fuente por los usuarios.


4.**¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?**

Un conflicto de fusión sucede cuando git no logra combinar de manera automatica los cambios realizados en dos ramas diferentes al realizar la fusión,es normal que esteconflicto se de en especial cuando dos o más desarrolladores han modificado las mismas líneas de código.

La forma de resolverlo, es básicamente detectar que causa el conflicto y decidir qué líneas de código son mejores para el proyecto.

5. **¿Qué es un archivo .gitignore y para qué se utiliza?**

Un archivo .gitignore es básicamente un archivo normal de texto que es colocado en la raíz de un proyecto de Git y lo que hace es decirle a git qué archivos debe ignorar.

Y su utilidad es para evitar que git utilice archivos no deseados para algún proyecto.

6. **¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?**

Una solicitud de extracción en github es básicamente una propuestaque es utilizada para combiinar los cambios realizados en una rama bifocadacon la rama principal de del repositorio.
Se utiliza, ya que es una manera de trabajar con diversos desarrolladores y verificar los cambios antes de combinarlo con el código original.

7. **¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado**
**y uno interpretado?**


Puede ser más optimo utilizar lenguajes compilados, cuando la velocidad de ejecución es esencial, como en el caso de los videojuegos o en aplicaciones de procesamiento de datos, también en aplicaciones que necesitan un bajo consumo de memoria como en dispositivos embebidos.

Asimismo, en lenguajes interpretados puede ser mucho más útil si se necesita un desarrollo web, para crear aplicaciones dinámicas o cuando se necesita automatizar tareas o realizar tareas sencillas.
Proporcione ejemplos de situaciones en las que sería más optimo utilizar un lenguaje
compilado y otras en las que sería m´as adecuado un lenguaje interpretado.


8. **Explique qué es un linker en el contexto de un lenguaje de programación compilado.**
¿**Cuál es su función principal y por qué es esencial en el proceso de compilación?**

Linker,es también conocido como enlazador y su función es básicamente combinar archivos diferentes de código objeto y bibliotecas para así generar un ejecutable.

Y su funcionalidad es importante ya que agrega las bibliotecas necesarios para que el programa funcione bien que es combinado con archivos de código objeto.

Es esencial porque permite la modulación, por lo que se podría dividir el código en diversos archivos. Así como permite el uso de bibliotecas, por lo que los programadores pueden utilizarlo para tomar funcionalidades para su código personal y no tener que comenzar desde cero.


9. **Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio**

    1. Si el repositorio está remoto, clonar una copia local suando git clone.
    2. Se crea una nueva rama "git checkout -b nombre"
    3. Editar los archivos que se desean modificar
    4. Añadir esos cambios con git add nombre_archivo
    5. Confirmar los cambios con git commit -m"mensaje"
    6. Subir los cambios con git push.


10.**Defina qué significa inicializar y declarar una variable.**

Inicializar una variable es básicamente darle un valor inicial a la misma justo en el momento que se crea.

Declarar una variables es más bien "decirle al compilador el tipo de dato y el nombre de la variable pero sin asignarle ningún valor inicial.

11. **¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

La sobrecarga de funciones lo que hace es que permite definir dos o más funciones con el mismo nombre, pero lo que hace la diferencia son las listas de parámetros.

Sus beneficios es que permite reutilizar el código, por lo que sólo hay que realizar una función con diferentes datos.
También da mayor flexibilidad, que permite cumplir diferentes necesidades.

12. **¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

Un puntero es aquella variable que se encarga de almacenar la dirección de memoria de otra variable, por lo que "apunta" a un lugar de la memoria.

Ejemplo:
El ejemplo típico de la biblioteca, que no memoriza la ubicación de todos los libros, más bien, utiliza un índice que le da la ubicación del libro, el índice puede ser percibido como un puntero.

13. **¿Qué es un branch (rama) en Git y cómo se utiliza?**

Una rama git es una copia independiente del historial del repositorio, su uso principal es para tener ciertos cuidados, ya que se puede trabajar en esta nueva rama sin ocasionas para probar códigos y no afectar la rama principal.


14. **¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**

La principal diferencia entre estos dos, es que el bucle do-while se va ejecutar al menos una vez sin importar la condición, mientras que el while, no se ejecuta si la condición es falsa por ejemplo.

15. **Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp
en C++. Describa el propósito específico de cada tipo de archivo.**

archivos.hpp
Estos archivos no contienen el código fuente, más bien es encargado de las declaraciones, como clases, funciones, variables, que se utilizan en el programa principal.

El próposivo de archivo.cpp
Acá si se encuentra el código fuente por lo que contiene la implementaciones de las funciones que fueron declaras en archivos.hpp.

16. **¿D´onde y cómo se guardan las variables que se crean en C++? Explique la diferencia**
**entre el almacenamiento de variables locales y globales.**

Las variables locales en C++ se almacenan en la pila y sólo se pueden acceder dentro de la función en la que fue declarada.
Las globales se amacenan en la memoria estática y se pueden acceder en todo el programa.

Y su principal diferencia, como se mencionó anteriormente es que las variables globales se pueden utilizar en todo el programa mientras que las locales sólo en la función que fue definida.

17. **¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

La diferencia es que por valor, las modificaciones de que uno pueda hacerle al parámetro dentro de la función, no debería afectar el valor original, mientras que referencial, las modificaciones que se hacen dentro del parámetro de la función sí cambia el valor original. Por último, por puntero, si hay modificaciones al valor al que apunta el puntero dentro de una función, afectan el valor original.

18. **Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección**
**apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese**
**arreglo mediante el puntero.**
Un puntero se utiliza para memorias dinámicas en donde se asigna y se libera la memoria durante la ejecución del programa o también como un paseje de referencias, para recorrer un arreglo...

Bueno, inicialmente un puntero de un arreglo en C++ apunta a una dirección de memoria no válida, por lo que siempre es necesario inicializar el puntero antes de usarlo

Se puede recorrer todo el arreglo incrementando el valor del puntero aritmeticamente.

19. **Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos**
**de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

Los punteros dobles en C++ son en realidad un puntero que apunta a otro puntero, es decir, una variable que almacena la dirección de una variable, que también tiene la dirección de otra variable y es utilizado especialmente para las veces que se necesita un nivel adicional de indirección.

Un puntero doble es beneficioso ya que puede permitir un puntero de una variable local como argumento a la función y evita que se modifiquen accidentamelte otras variables.

20. **¿Para qué se utiliza la directiva #ifndef?**

La directiva #ifndef en C++ es utilizada usualmente para proteger contra inclusiones múltiples de archivos.hpp, es decir, #ifndef se encarga de incluir un archivo de cabecera sólo una vez durante la ejecución, evitando errores si se quisiera ejecutar con varios archivos fuente archivos.cpp.

21. **¿Qué es el puntero this en C++?**

El puntero this es un puntero predefinido disponible dentro todas las funciones no estáticas de alguna clase o estructura, es decir, que permite acceder a los atributos del objeto desde dentro del método.

22. **¿Cuél es la diferencia entre un arreglo y una lista en C++?**
La diferencia es que un arreglo es estático, es decir, su tamaño se define en  el moemnto de la declaración y no es modificado luego, mientras que una lista es dinámica, es más flexible a cambios, por lo que su tamaño se puede aumentar o disminuir según se desea.

23. **¿Investigue qué es un memory leak?**

Un memory leak, es una "fuga" en memoria, que es producida cuando se presenta un problema en el software debido a que un programa no está liberando la memoria que ya no necesita, esto puede suceder hasta que se acabe la memoria dispoble.

Esto no sólo llena toda la memoria, sino también genera un menor rendimiento del programa, por lo que puede tardar más en ejecutarse.



# Referencias
[leaks](https://medium.com/@rcampos.tapia/fugas-de-memoria-memory-leaks-una-fuga-que-se-puede-controlar-be39bdf096d5)

[memory](https://ccia.ugr.es/~jfv/ed1/c++/cdrom3/TIC-CD/web/tema23/teoria_1.ht)
[puntero](https://www.cplusplus.com/doc/tutorial/pointers)
[flujo]( https://nvie.com/posts/a-successful-git-branching-model/)
[pull](https://docs.github.com/es/pull-requests)



### Charlie Arroyo b90765.