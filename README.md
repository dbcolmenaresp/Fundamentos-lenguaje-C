# Fundamentos del lenguaje de programación C

# Breve historia del lenguaje C
El desarrollo del lenguaje de programación C inicio con el lenguaje BCPL, desarrollado por Martin Richards, luego el lenguaje B creado por Ken Thompson en 1970, el lenguaje C fue desarrollado por Dennis Ritchie en 1971.
# Características del lenguaje C
Reducido tamaño con un numero pequeño de palabras clave, lo cual reduce considerablemente la curva de aprendizaje.  
El tamaño reducido del lenguaje es compensado por las bibliotecas estándar que implementan gran cntidad de funciones especializadas.  
El lenguaje de programación C tiene un muy reducido conjunto de instrucciones, las cuales se complementan con el uso de bibliotecas de funciones estándar, math.h, lib.h, stdio.h entre otras.  
Se recomienda cuando se requiere una función específica en un programa, antes de desarrollar dicha función, por completo, verificar en la biblioteca estándar del compilador que este utilizando si dicha función existe y utilizarla, esto ahorra tiempo de desarrollo y depuración de los programas.  
Contiene instrucciones de bajo nivel dirigidas a bits, lo cual le da versatilidad al lenguaje.  
La existencia de gran cantidad de compiladores para una gran variedad de plataformas hardware permite su fácil portabilidad.  
Se genera código ejecutable de gran eficiencia.  
# Razones para usar el lenguaje C
Moderno, fácil de aprender, sintaxis similar a lenguajes actuales, programas eficientes
# Etapas en la creación de un programa en lenguaje C
## Edición
Proceso de creación de un programa en lenguaje C con el compilador de línea de comandos gcc  
Edición del código fuente: se crea un archivo de texto plano que contenga el código fuente completo, con el uso de un editor de texto simple como vi.  
Cada línea que contenga el archivo debe ser una sentencia que cumpla con la sintaxis del lenguaje de programación C.  
El nombre del archivo debe tener por convención la extensión .c  
Para editar con el editor de texto vi se ejecuta el comando  
vi programa.c  
Este comando crea y prepara para la edición un archvo de nombre programa.c  
Incluir en el archivo las siguientes líneas:  

#include <stdio.h>  

Int main(){  
    printf(“Hola mundo!”\n);  
    return 0;  
}  

## Compilación
## Compilación del código fuente con el compilador gcc
El compilador gcc es un compilador de código abierto ue viene incorporado en la mayoría de distribuciones y sistemas *NIX
Para obtener mayor información sobre este compilador se puede consultar el manual con el comando  
man gcc  
Para compilar el archivo editado anteriormente se procede a ejecutar el siguiente comando constituido por el comando gcc seguido por el nombre del archivo a compilar  
gcc programa.c  
El resultado de la ejecución de este comando es un archivo de nombre a.out que contiene el programa ejecutable resultado de la compilación siempre y cuando el compilador no detecte errores de sintaxis en el código fuente.  
Para darle un nombre diferente al archivo ejecutable obtenido con la compilación, se usa la opción –o seguida del nombre del archivo ejecutable, como se indica en el siguiente formato  
gcc .o ejecutable fuente.c  
Con el ejemplo del código fuente programa.c seria  
gcc –o programa programa.c  
Para visualizar en pantalla los comandos ejecutados durante el proceso de compilación, se agrega la opción –v al comando del compilador gcc  
gcc –v –o programa programa.c  
## Ejecución
## Ejecución de un programa en el sistema *NIX
En caso de haber realizado el proceso de compilación sin errores de sintaxis, podemos proceder a la ejecución del código fuente obtenido.  
Para poder ejecutar el programa se usa la siguiente sentencia en la línea de comandos  
./a.out  
En caso de haber dado un nombre diferente al programa ejecutable con la  opción –o, se ejecuta  
./programa  
La ejecución del programa puede dar como resultado un error en tiempo de ejecución como una división por cero, o que no se produce el resultado deseado, en ese caso se corrije el error y se repite el proceso.  
# Descripción breve del proceso de compilación  
Con el fin de obtener el código ejecutable a partir del archivo fuente, el compilador realiza una serie de pasos que progresivamente hace las modificaciones necesarias para obtener un archivo contentivo del código que puede ser ejecutado pro la computadora.  
## Preprocesador  
Es el primer paso que se realiza en el proceso de compilación. El preprocesador recibe el archivo fuente y se encarga de eliminar los comentarios, interpretar las directivas del preprocesador #include y agregar el contenido de los archivos indicados en dicha directiva, además de definir las constantes indicadas por la directiva #define.  
## Compilador  
Traduce el archivo recibido del proceso de precompilacion en código ensamblador.
## Ensamblador  
Crea el código fuente a partir del archivo recibido del compilador.
## Ligador  
Se encarga de incluir el código correspondiente a las funciones de biblioteca indicadas en el archivo fuente y resuelve las referencias a variables externas.
# Estructura de un programa en lenguaje C
Comandos del preprocesador  
Definición de tipos  
Prototipos de funciones:  
Se declaran al inicio del programa el tipo de variable que devuelve cada funcion, el nombre y el listado de datos que recibe como parametros. Con esta estructura se hace al programa mas claro y legible y el compilador revisa la sintaxis de las funciones.  
tipo_devuelto nombre_funcion(tipos_parametros);  
Declaración de variables  
Declaración de funciones  
Función principal main  
Sentencia de retorno  
# Estructura de una función en lenguaje C
Tiporetorno nombrefuncion(parametros){  
Variables locales  
Sentencias de C  
Sentencia de retorno  
}  
# Herramientas para la creación de programas en lenguaje C
## Herramientas de edición
Bloc de notas, notepad++, sublimetex, atom, vi
## Herramientas de compilación
Devc++  
Eclipse  
## Herramientas en línea
Paiza.io  
# Variables
Son espacios de memoria asignados para almacenar un valor determinado, el tamaño de memoria que se debe asignar depende del tipo de variable que se va a almacenar.  
Declaración  
Asignación  
Tipos  
Globales  
Locales  
Usos de variables  
Valores intermedios de operaciones, acumuladores, contadores  
# Constantes
Const tipo nombre valor;  
#define  
# Operadores aritméticos
# Operadores de comparación
# Operadores lógicos
# Orden de procedencia
# Estructuras condicionales
If  
?  
Switch  
# Estructuras de repetición
For  
While  
Do-while  
# Modificadores de ciclos
Break  
Continue  
# Arreglos
