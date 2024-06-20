# ie0217
## Tarea6




## Parte teórica.

1. **¿Qué es una base de datos relacional y cuáles son sus características fundamentales?**


Una base de datos relacional es un tipo de base de datos que se encarga de  organiza los datos en tablas que se pueden relacionar entre sí a través de claves. Dentro de sus caractreríticas fundamentales, es que poseen diferentes llaves, foranea y primaria, lo que significa que la primaria es única en las columnas de la tabla. y la foranea crea un viculo con la llave primaria.

2. **¿Cuál es la diferencia entre una clave primaria y una clave candidata en una base de**
**datos relacional?**

Que mientras una llave primaria es la unica en las columnas, la candidatas es una llaver que podría ser una llave primeria porque cumple con algunos requisitos de ser unica.

3. **¿Qué son las claves foráneas y cómo se utilizan para mantener la integridad referencial**
**en una base de datos?**

Una clave foranea es una columna que aplica un vínculo entre los datos en dos tablas. La clave foránea hace referencia a otra tabla, mientras que la integridad referencial asegura que las relaciones entre tablas se mantengan coherentes en l BD.

4. **¿Qué es una transaccion en el contexto de bases de datos y cuáles son las propiedades**
**ACID que debe cumplir?**

En el contexto de bases de datos, una transacción es basicamente una secuencia de una o mas operaciones de base de datos que se ejecutan como una unidad lógica y las propiedades que debe 
cumplir son atomicidad, consistencia y durabilidad.
5. **¿Qué son las vistas (views) en SQL y cuáles son los beneficios y limitaciones de su uso?**

Las vistas son concidas en SQL como objetos de base de datos que permiten crear una representacion personalizada de los datos en una o más tablas mediante una consulta SQL.
Sus beneficios es que permite encapsular consultas sql de un objeto reutilizable haciendo una simplificacion.
Sus limitaciones es que las vistas es que las vistas no almacenan datos fisicamente, lo que significa que cada vez que se accede a una vista la consulta se ejecuta.

6. **¿Qué es la normalización en bases de datos y cuáles son las diferentes formas normales**
**(normal forms)?**

La normalización en bases de datos es es conocido basicamente como un proceso de organización de los datos en una base de datos para reducir la redundancia y mejorar la integridad de los datos.
Y sus formas son 1NF, 2NF,3NF,4NF,5NF.
7. **¿Cómo funcionan los índices en SQL y cuál es su impacto en el rendimiento de las**
**consultas?**

Los Indices en SQL tienen la funcion de mejorar la velocidad de las operaciones de recuperación de datos en una tabla.
EL impacto es que los indices mejoran bastante el  rendimiento de las consultas SELECT al permitir busquedas eficiente.

8. **¿Qué es SQL Injection y cuáles son las mejores prácticas para prevenir este tipo de**
**ataque?**

SQL Injection es basicamente una tecnica de ataque utilizada por hackers para usar bases de datos a través de aplicaciones web que interactúan con bases de datos SQL y manera de prevenirlo es usar consultas parametrizadas.

9. **¿Qué son los procedimientos almacenados (stored procedures) en SQL y cómo pueden**
**mejorar la eficiencia y seguridad de las operaciones de base de datos?**

Los procedimientos almacenados en SQL son basicamente programas o rutinas que se almacenan en la base de datos y estos contienen una o mas instrucciones SQL.
La manera de mejorar la eficiencia y seguridad de las operaciones de base de datos es reutilizando el codigo ya que los procedimientos encapsulados permiten encapsular la logica y mejora la seguridad al tener control de accesos y permisos.



10. **¿Cómo se implementan las relaciones uno a uno, uno a muchos y muchos a muchos en**
**una base de datos relacional y qué consideraciones se deben tener en cuenta en cada**
**caso?**
En una base de datos relacional, las relaciones entre entidades se usan diferentes tipos de asociaciones, como uno a uno, uno a muchos y muchos a muchos.

cuando es uno a uno, asegurarse que los valores de la clave foranea sea unico.
cuando es uno a muchos ,mas bien se debe considerar es que la tabla que contiene muchos tenga una columna que tenga clave foranea para uno.
Por ultimo para muchos a muchos a muchos se debe disenar adecuadamente la tabla intermedia.