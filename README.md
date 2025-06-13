# ProgramacionOrientadaObjetos2
Proyecto de la clase de Programación Orientada a Objetos TC1030 

# Contexto 
Este programa está diseñado para mejorar la organización del grupo estudiantil de robótica TecDroid 3354. Dentro del equipo existen tres tipos principales de integrantes:

Estudiantes (divididos en mesa directiva y colaboradores)

Mentores

Profesores

El objetivo del programa es facilitar la gestión de los integrantes del equipo y apoyar en la planeación de los eventos regionales. Para ello, el código permite:

Crear personas y asignarlas a las distintas categorías del equipo.

Asignar puntos CAS (Puntos Impact) a los estudiantes y horas de servicio a los mentores.

Determinar qué personas cumplen con los requisitos para asistir a los regionales:

Estudiantes necesitan una cierta cantidad de puntos CAS.

Mentores necesitan un mínimo de horas de servicio.

Generar una lista final de asistentes que puedan ir al regional:

Incluye estudiantes que tengan los puntos para ir, mentores con horas de servicio y profesores acompañantes.

Se asegura que por cada 15 estudiantes haya al menos un profesor acompañante, cumpliendo con las reglas de supervisión.

Este sistema ayuda a mantener el control del equipo de forma automatizada, asegurando que se cumplan los requisitos para asistir a los eventos y organizando de forma clara quiénes van y quiénes acompañan.

# Codigo 
El código está compuesto por seis clases. La clase base es PersonaT, una clase abstracta que representa a cualquier persona del equipo y define métodos virtuales puros como mostrarInfo() y puedeIrARegional(), permitiendo polimorfismo. De esta clase heredan tres clases concretas: Estudiante, que representa a los alumnos del equipo y contiene atributos como puntos CAS y si pertenecen a la mesa directiva; Mentor, que incluye las horas de servicio prestadas; y Profesor, que representa a los docentes que acompañan al equipo a eventos. Cada una de estas clases sobrescribe los métodos virtuales de PersonaT para adaptarse a su función. Por otro lado, la clase Actividad permite registrar actividades del equipo y otorga puntos o servicio según lo seleccionado, aplicando el concepto de composición al ser utilizada dentro de la clase Administrador. La clase Administrador centraliza el control del sistema: tiene arreglos de apuntadores a PersonaT, lo que permite manipular a estudiantes, mentores y profesores de forma general gracias al polimorfismo, y gestiona la lógica para determinar quién puede asistir a los eventos regionales según los criterios dados. Finalmente, el `Menu` permite al usuario interactuar con el sistema de forma sencilla a través de opciones numeradas.

# Otras funciones utilizadas en el codigo: 
**Getline** 
Getline se utiliza para leer una línea completa de texto, incluyendo los espacios. Es muy útil cuando se ingresan nombres completos, descripciones o cualquier dato que pueda contener espacios. A diferencia de cin, que se detiene al encontrar un espacio, getline sigue leyendo hasta encontrar un salto de línea (\n).
https://cplusplus.com/reference/string/string/getline/?kw=getline

**Cin.ignore**
cin.ignore() se utiliza para limpiar el buffer de entrada. Esto es necesario cuando, después de usar cin (que deja un salto de línea pendiente), se quiere usar getline. Si no se limpia el buffer, getline podría leer ese \n pendiente y saltarse el siguiente input.
https://cplusplus.com/reference/istream/istream/ignore/?kw=cin.ignore

**stringstream aux**
stringstream es una clase de la librería <sstream> que permite construir cadenas de texto (strings) usando el mismo formato que cout, pero en lugar de mostrarlo en pantalla, lo guarda como una cadena. Se usa cuando quieres devolver o guardar una descripción formateada.
https://cplusplus.com/reference/sstream/stringstream/?kw=stringstream
