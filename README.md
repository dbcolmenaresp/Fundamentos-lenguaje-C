# Fundamientos-lenguaje-C
Fundamentos del lenguaje de programación C

Fundamentos de lenguaje C
Breve historia del lenguaje C
Antecedentes, creadores, usos
Características del lenguaje C
Portabilidad, fácil aprendizaje
Razones para usar el lenguaje C
Moderno, fácil de aprender, sintaxis similar a lenguajes actuales, programas eficientes
Etapas en la creación de un programa en lenguaje C
Edición
Proceso de creación de un programa en lenguaje C con el compilador de línea de comandos gcc
Edición del código fuente: se crea un archivo de texto plano que contenga el código fuente completo, con el uso de un editor de texto simple como vi.
Cada línea que contenga el archivo debe ser una sentencia que cumpla con la sintaxis del lenguaje de programación C.
El nombre del archivo debe tener por convención la extensión .c
Para editar con el editor de texto vi se ejecuta el comando
Vi programa.c
Este comando crea y prepara para la edición un archvo de nombre programa.c
Incluir en el archivo las siguientes líneas
#include <stdio.h>
Int main(){
    printf(“Hola mundo!”\n);
    return 0;
}
Compilación
Compilación del código fuente con el compilador gcc
el compilador gcc es un compilador de código abierto ue viene incorporado en la mayoría de distribuciones y sistemas *NIX
para obtener mayor información sobre este compilador se puede consultar el manual con el comando
man gcc
para compilar el archivo editado anteriormente se procede a ejecutar el siguiente comando constituido por el comando gcc seguido por el nombre del archivo a compilar
gcc programa.c
el resultado de la ejecución de este comando es un archivo de nombre a.out que contiene el programa ejecutable resultado de la compilación siempre y cuando el compilador no detecte errores de sintaxis en el código fuente.
Ejecución
Descripción breve del proceso de compilación
Preprocesador
Compilador
Ensamblador
Ligador
Estructura de un programa en lenguaje C
Comandos del preprocesador
Definición de tipos
Prototipos de funciones
Declaración de variables
Declaración de funciones
Función principal main
Sentencia de retorno
Estructura de una función en lenguaje C
Tiporetorno nombrefuncion(parametros){
Variables locales
Sentencias de C
Sentencia de retorno
}
Herramientas para la creación de programas en lenguaje C
Herramientas de edición
Bloc de notas, notepad++, sublimetex, atom, vi
Herramientas de compilación
Devc++
Eclipse
Herramientas en línea
Paiza.io
Variables
Concepto
Declaración
Asignación
Tipos
Globales
Locales
Usos de variables
Valores intermedios de operaciones, acumuladores, contadores
Constantes
Const tipo nombre valor;
#define
Operadores aritméticos
Operadores de comparación
Operadores lógicos
Orden de procedencia
Estructuras condicionales
If
?
Switch
Estructuras de repetición
For
While
Do-while
Modificadores de ciclos
Break
Continue
Arreglos

