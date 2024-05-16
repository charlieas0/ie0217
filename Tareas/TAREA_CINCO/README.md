 # ie0217
## Tarea5
## Charlie Arroyo. B90765
## Parte práctica.
Puede ejecutar el codigo de la siguiente manera en terminal:

```
g++ main.cpp ValidarEmail.cpp -o correo.txt
// Ejecutable:
./correo.txt
```


# Parte teórica.

## 1. Expresiones regulares.
 **1. ¿Qué es una expresión regular y cuál es su propósito en programación?**

Una expresión regular, también conocida como regex o regexp, es una secuencia de caracteres que forma un patrón de búsqueda, su próposito en programación es poder manipular textos en realcion a ciertos criterios.


**2. ¿Qué significan los caracteres especiales . y * en una expresión regular?**

El punto (.) en caracteres especiales, representa cualquier carácter individual, menos el salto de línea (\n en la mayoría de los motores de expresiones regulares). 
El asterisco (*) funciona para indicar que el elemento anterior puede aparecer cero o más veces

**3. ¿Cómo se pueden agrupar subexpresiones en una expresión regular?**


 Agrupar subexpresiones utilizando paréntesis es una técnica poderosa en las expresiones regulares que permite capturar subgrupos y establecer límites para alternativas diferentes.
**4. ¿Qué función cumple la barra invertida \ en una expresión regular?**
La funcion barra invertida tiene dos funciones principales, incluyendo escapar caracteres especiales y representar ciertas secuencias especiales.

**5. Explique cómo se pueden capturar coincidencias usando paréntesis en una expresión**
**regular.**

Usar paréntesis en una expresión regular permite capturar coincidencias específicas dentro de un texto, se puede hacer de la sigueinte manera:

(\w+): Esto captura uno o más caracteres de palabra (letras, dígitos o inclusdo "_")

@: Hace referencia a  "@"

(\w+\.\w+): Esto captura una cadena de caracteres de palabra seguida de un punto y luego otra cadena de caracteres de palabra.

**6. ¿Cuál es la diferencia entre \d y \D en una expresión regular?**

En una expresión regular, los dos se utilizan para representar lo mismo,  \d como \D se utilizan para representar caracteres numéricos, pero el significado es diferente:

\d: Es para cualquier número del 0 al 9.

\D: Coincide con cualquier carácter que no sea un número del 0 al 9.


**7. ¿Cómo se representa una clase de caracteres en una expresión regular?**


En una expresión regular, una clase de caracteres se puede representa usando parentesis cuadrados[ ]. esto permite definir un conjunto de caracteres entre los cuales se puede hacer coincidir un único carácter en la cadena de entrada.

**8. ¿Cuál es el propósito del modificador $ en una expresión regular?**

El modificador $  se utiliza para delimitar el final de una cadena de texto. Su propósito es asegurar que coincida solo si está al final de la cadena de entrada.

**9. Describa cómo validar una dirección de correo electrónico usando expresiones regulares**
**en C++.**

Primero se deben incluir las librerias a utilizar.

Segundo, hay que definir alguna funcion para validar la direccion de correo

Tercero, utilizando Regex, dentro de la funcion se establece la direccion de correo que se debe seguir como ```regex correo("\\b[A-Za-z0-9._%+-]+@xxxxxx+\\xxxxxx");```

Luego, se genera el main y se pide al usuario el correo.

**10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de **software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular**
**compleja, especialmente en contextos donde el tiempo de ejecución es crítico?**

Hay que saber que al utilizar expresiones regulares en aplicaciones de software donde el rendimiento es crítico, es primordial considerar las implicaciones de rendimiento. Esto implica optimizar el patrón de la expresión regular, evitar capturas innecesarias, utilizar funciones de búsqueda  y realizar pruebas de rendimiento.

**11. ¿Qué es un Makefile y cuál es su función en un proyecto de C++?**

El uso de un Makefile es muy util ya que simplifica el proceso de compilación en un  software, ya que automatiza tareas repetitivas y permite a los desarrolladores compilar su código de manera rapida y flexible.

**12. ¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?**

Las reglas implícitas son reglas predeterminadas que se utilizan en el  Make para construir archivos de salida como los ejecutables a partir de archivos de entrada, mientras que las reglas explícitas son reglas definidas de manera directa en el Makefile para manejar ciertos casos específicos o personalizados de construcción.

**13. Explique el prop´osito de las macros (variables) en un Makefile.**

Los macros en un Makefile se encargan facilitar la configuración, la reutilización, la legibilidad y el mantenimiento del código, así como la gestión de dependencias.

**14. ¿Qué es un objetivo (target) en un Makefile y cómo se define?**

En un Makefile, un objetivo (target) es un nombre para un archivo una tarea que se desea ejecutar. Estos estos pueden ser programas ejecutables, bibliotecas, archivos de objeto, documentos generados. Los objetivos son las unidades básicas de construcción en Makefiles entonces estos  representan los resultados finales que desea tener el usuario.



**15. ¿Por qué es útil dividir un proyecto de C++ en m´ultiples archivos fuente y cómo ayuda**
**el uso de Makefiles en este enfoque?**

 Dividir un proyecto de C++ en múltiples archivos fuente proporciona beneficios en términos de modularidad, reutilización de código, asi como orden, que proporciona mejor manejo de errores. El uso de Makefiles en este enfoque facilita la automatización del proceso de construcción, la gestión de dependencias.

**16. ¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?**

Hay algunas maneras de representar dependencias, podria ser usar variables, que se basa en definir una variable la que puede representar una lista de archivos fuente, lo bueno es que se podria añadir archivos a esta variable o eliminarlos, según se desee.


**17. Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando**
**un solo Makefile.**

Para esto se debe tener en cuenta, que hay que tener consideraciones para el makefile, se puede lograr esto utilizando variables condicionales, herramientas de construcción multiplataforma, contenedores, o ajustes según lo que se necesita.

**18. ¿Cuál es el propósito de los comandos clean y all en un Makefile?**


El comando **all** se utiliza para construir todos los objetivos especificados en el Makefile. 

El comando **clean** se utiliza para limpiar el directorio de salida eliminando archivos generados durante el proceso de construcción. 

**19. Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.**

Se pueden pasar argumentos desde la línea de comandos a un Makefile utilizando variables especiales, variables definidas por el usuario o parámetros de línea de comandos.
**20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente**
**.cpp a un archivo objeto .o.:**

Una manera de compilar un archivo fuente a un archivo objeto.
```
%.o: %.cpp
    g++ -c $< -o $@
```

## 2. Makefile.

**1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un**
**makefile?**

Suelen contener:

CC: especifica el compilador que se utilizará.

CFLAGS: Esta variable lo que contiene son flags(indicadores) que se pasarán al compilador C durante la compilación.

CXXFLAGS: Similar a CFLAGS, pero es utilizado en el compilador C++.

LDFLAGS: Esta variable contiene los flags que se pasarán al enlazador (linker) durante algún proceso de vinculación entre archivos objeto que sean generados por el compilador. 

**2. ¿De qué se compone una regla en un Makefile?**

En un Makefile, una regla se compone por tres partes, el objetivo, las dependencias y las acciones.

**3. Defina qué es un target y cémo se relaciona con sus prerequisitos.**

En  makefile, un "target" (objetivo) es basicamente un nombre que representa un archivo o una acción que se quiere construir. 
Y la manera de relacionarse con sus prerequisitos es por medio de los archivos o acciones de las cuales depende el target.


**4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?**

En el comṕppppilador gcc, la bandera -I se utiliza para especificar directorios de inclusión para archivos de encabezado, -c se utiliza para compilar código fuente sin enlazar, y -o se utiliza para especificar el nombre del archivo de salida generado por el compilador, como un ejecutable por ejemplo.




**5. ¿Cémo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**

En un makefile, las variables se definen ```VAR = var```. Estas variables pueden contener nombres de archivos, comandos, entre otros. Las variables en un makefile se utilizan para hacer que el proceso de escritura y mantenimiento de scripts de compilación sea más flexible y fácil de entender.


**6. ¿Qué utilidad tiene un @ en un Makefile?**


En un makefile, el símbolo @ se utiliza como prefijo en una regla que funciona para indicarle que el comando asociado no debe mostrarse en la salida del terminal cuando se ejecuta make. 

**7. ¿Para qué se utiliza .PHONY en un Makefile?**

En un makefile .PHONY se usa para idecirle al make que hay objetivos que no corresponden a archivos reales en el sistema de archivos, entonces, lo que hace es que se asegura que make no trate de verificar si hay un archivo con ese nombre y que solo ejecute las acciones.



# REFERENCIAS

TylerMSFT. (2023, 16 junio). Expresiones regulares (C++). Microsoft Learn. https://learn.microsoft.com/es-es/cpp/standard-library/regular-expressions-cpp?view=msvc-170

Makefile Tutorial by Example. (s. f.). Makefile Tutorial. https://makefiletutorial.com/
