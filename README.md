# Fundamentos del lenguaje de programación C

[El lenguaje de programación](https://es.wikipedia.org/wiki/Lenguaje_de_programaci%C3%B3n) [C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)) fue desarrollado en los laboratorios AT&T por [Dennis Ritchie](https://es.wikipedia.org/wiki/Dennis_Ritchie "Biografia de Dennis Ritchie"), quien en colaboracion con [Ken Thompson](https://es.wikipedia.org/wiki/Ken_Thompson "Biografia de Ken Thompson") creo el [sistema operativo](https://es.wikipedia.org/wiki/Sistema_operativo) [UNIX](https://es.wikipedia.org/wiki/Unix). C es el lenguaje de pogramacion de alto nivel de proposito general más popular.  

# Breve historia del lenguaje C

- [BCPL](https://es.wikipedia.org/wiki/BCPL_(lenguaje_de_programaci%C3%B3n)): desarrollado en 1969 por [Martin Richards](https://es.wikipedia.org/wiki/Martin_Richards "Biografia de Martin Richards") como un lenguaje para escribir software de sistemas operativos y [compiladores](https://es.wikipedia.org/wiki/Compilador).
- [B](https://es.wikipedia.org/wiki/B_(lenguaje_de_programaci%C3%B3n)): Ken Thompson uso muchas caracteristicas de CPL y uso B para crear una temprana version del sistema operativo UNIX en los laboratorios Bell en 1970 en una computadora DEC PDP-7.
BCPL y B eran lenguajes de programacion sin tipado, la labor de elegir entre los tipos de datos era responsabilidad del programador.
- [C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)): C fuen creado a partir de B por Dennis Ritchie en los laboratorios Bel y fue originalmente implementado en una computadora DEC PDP-11 en 1972, inicialmente usado para implementar el sistema operativo UNIX, usa muchos conceptos de BCPL y B con la adicion del tipado de datos y otras caracteristicas.
- [C++](https://es.wikipedia.org/wiki/C%2B%2B): es una extension de C creada por [Bjarne Stroustup](https://es.wikipedia.org/wiki/Bjarne_Stroustrup) a principios de 1980 en los laboratorios Bell. Entre las caracteristicas agregadas a C++ la mas importante es que provee las posibilidades de programacion orientada a objetos.

# Características del lenguaje C

- Lenguaje de proposito general lo cual significa que con este lenguaje de programacion se puede desarrollar programas para resolver problemas de una muy amplia gama de propositos.
- Lenguaje de alto nivel las sentencias que conforman el lenguaje se expresan en un lenguaje que se entiende facilmente, parecido al lenguaje inglés con reglas estrictas de sintaxis, lo que aporta legibilidad y facilidad de mantenimiento a los programas desarrollados en este lenguaje.
- Lenguaje compilado, el codigo fuente conformado por una serie de sentencias en lenguaje de alto nivel es traducido a traves del proceso de compilacion, en un archivo en lenguaje de maquina en codigo binario que entiende y ejecuta el computador.
- Lenguaje de formato estructurado.
- Lenguaje con tipado de datos el lenguaje proporciona la verificacion del tipo de datos con el que realiza las operaciones.
- El lenguaje C permite la manipulacion directa de bits, bytes, palabras y punteros, esto le hace particularmente adecuado para la programacion de sistemas, en la que estas operaciones son muy comunes.
- El lenguaje C tiene solo 32 palabras clave (27 estandard originales y 5 añadidas por el comite de estandarizacion de ANSI), numero micho menor al que contienen otros lenguajes de programacion de alto nivel.

# Razones para usar el lenguaje C

- De facil aprendizaje por ser un lenguaje formado por pocas palabras clave y pocos comandos que recordar, que aunado a la facilidad de comprension por ser un lenguaje de alto nivel, permite comprender la programacion en el lenguaje C con relativa facilidad.
- Potencia y versatilidad se pueden hacer muchas cosas con este lenguaje.
- Eficiencia los programas escritos en el lenguaje de programación C se traducen a lenguaje de maquina para la plataforma en la cual se compila, lo cual contribuye a la obtencion de programas mas eficientes.
- Portabilidad multiplataforma los programas hechos en este lenguaje pueden ser ejecutados en diferentes plataformas para las cuales exista un compilador que convierta adecuadamente el codigo fuente en el lenguaje de maquina correspondiente.
- Es la base de otros lenguajes la mayoria de lenguajes modernos derivan a partir de este, lo cual supone la ventaja de poder aplicar los conocimientos adquiridos en la programacion en C, en la programacion con otros lenguajes similares mas modernos y 
utilizados que se basan en la sintaxis del lenguaje C. Algunos de los lenguajes cuya sintaxis deriva del lenguaje C son:

	- [C++](https://es.wikipedia.org/wiki/C%2B%2B) es una version ampliada del lenguaje C que agrega la posibilidad de usar caracteristicas de la programacion orientada a objetos, usado para desarrollar aplicaciones de escritorio y videojuegos de diferentes plataformas.
	- [Java](https://es.wikipedia.org/wiki/Java_(lenguaje_de_programaci%C3%B3n)), [javascript](https://es.wikipedia.org/wiki/JavaScript), [PHP](https://es.wikipedia.org/wiki/PHP) usados principalmente para el desarrollo de aplicaciones web.
	- [Objetive-C](https://es.wikipedia.org/wiki/Objective-C) usado para desarrollar aplicaciones en la plataforma iOS.
	- [C#](https://es.wikipedia.org/wiki/C_Sharp) usado para desarrollar aplicaciones de Windows Phone y juegos de XBOX 360.
	- [Perl](https://es.wikipedia.org/wiki/Perl) es un conocido lenguaje usado para el diseño web en sus inicios, actualmente muy usado en labores de administracion de sistemas.

# Etapas en la creación de un programa en lenguaje C
## Edición
Proceso de creación de un programa en lenguaje C con el [compilador](https://es.wikipedia.org/wiki/Compilador) de línea de comandos [gcc](https://es.wikipedia.org/wiki/GNU_Compiler_Collection)  
Edición del [código fuente](https://es.wikipedia.org/wiki/C%C3%B3digo_fuente): se crea un archivo de texto plano que contenga el código fuente completo, con el uso de un editor de texto simple como [vi](https://es.wikipedia.org/wiki/Vi).  
Cada línea que contenga el archivo debe ser una sentencia que cumpla con la sintaxis del lenguaje de programación C.  
El nombre del archivo debe tener por convención la extensión .c  
Para editar con el editor de texto vi se ejecuta el comando  

`vi programa01.c`  

Este comando crea y prepara para la edición un archvo de nombre programa01.c  
Incluir en el archivo las siguientes líneas:  

```c
#include <stdio.h>  

int main(){  
    printf(“Hola mundo!”\n);  
    return 0;  
}  
```

## Compilación
## Compilación del código fuente con el compilador gcc
El compilador gcc es un compilador de código abierto que viene incorporado en la mayoría de distribuciones y sistemas *NIX
Para obtener mayor información sobre este compilador se puede consultar el manual con el comando  

`man gcc`  

Para compilar el archivo editado anteriormente se procede a ejecutar el siguiente comando constituido por el comando gcc seguido por el nombre del archivo a compilar  

`gcc programa01.c`  

El resultado de la ejecución de este comando es un archivo de nombre a.out que contiene el programa ejecutable resultado de la compilación siempre y cuando el compilador no detecte errores de sintaxis en el código fuente.  
Para darle un nombre diferente al archivo ejecutable obtenido con la compilación, se usa la opción –o seguida del nombre del archivo ejecutable, como se indica en el siguiente formato  

`gcc -o ejecutable fuente.c`  

Con el ejemplo del código fuente programa.c seria  

`gcc –o programa programa01.c`  

Para visualizar en pantalla los comandos ejecutados durante el proceso de compilación, se agrega la opción –v al comando del compilador gcc  

`gcc –v –o programa programa01.c`  

## Ejecución
## Ejecución de un programa en el sistema *NIX
En caso de haber realizado el proceso de compilación sin errores de sintaxis, podemos proceder a la ejecución del código fuente obtenido.  
Para poder ejecutar el programa se usa la siguiente sentencia en la línea de comandos  

`./a.out`  

En caso de haber dado un nombre diferente al programa ejecutable con la  opción –o, se ejecuta  

`./programa`  

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
## Comandos del preprocesador  
## Definición de tipos  
## Prototipos de funciones:  
Se declaran al inicio del programa el tipo de variable que devuelve cada funcion, el nombre y el listado de datos que recibe como parametros. Con esta estructura se hace al programa mas claro y legible y el compilador revisa la sintaxis de las funciones.  

`tipo_devuelto nombre_funcion(tipos_parametros);`  

## Declaración de variables  
## Declaración de funciones  
## Función principal main  
## Sentencia de retorno  

# Estructura de una función en lenguaje C

```
Tipo_retorno nombre_funcion(parametros){  
    variables locales  
    sentencias de C  
    sentencia de retorno  
}
```  

# Herramientas para la creación de programas en lenguaje C
## Herramientas de edición
- Bloc de notas
- [notepad++](https://notepad-plus-plus.org/) es un editor de texto y de código fuente libre con soporte para varios lenguajes de programación. Con soporte nativo para Microsoft Windows. Se parece al Bloc de notas en cuanto al hecho de que puede editar texto sin formato y de forma simple.  
- [Sublimetex](https://www.sublimetext.com/) es un editor de texto y editor de código fuente está escrito en C++ y Python para los plugins. Desarrollado originalmente como una extensión de Vim, con el tiempo fue creando una identidad propia, por esto aún conserva un modo de edición tipo vi llamado Vintage mode.  
- [Atom](https://atom.io/) es un editor de código de fuente de código abierto para macOS, Linux, y Windows​ con soporte para multiples plug-in escritos en Node.js y control de versiones Git integrado, desarrollado por GitHub. Atom es una aplicación de escritorio construida utilizando tecnologías web. 
- vi
## Herramientas de compilación
- [Devc++](http://orwelldevcpp.blogspot.com/)  
- Eclipse  
## Herramientas en línea
- [Paiza.io](https://paiza.io/es) permite editar y copilar en línea. Es compatible con más de 20 lenguajes: C, C++, Java, Ruby, Python, PHP, Perl... y más. Puede utilizarlo para aprender a programar, escribir archivos por lotes, como web scraper, etc ...  

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
`Const tipo nombre valor;`  
`#define`  
# Operadores aritméticos
# Operadores de comparación
# Operadores lógicos
# Orden de procedencia

# Estructuras condicionales
## Sentencia if  

```
if (condicion)  
    sentencia;
```
    
```
if (condicion){  
    bloque de sentencias  
}
```

```
if (condicion){  
    bloque de sentencias  
}else{  
    bloque de sentencias  
}
```  

```
if (condicion){  
    bloque de sentencias  
}esle if (condicion){  
    bloque de sentencias  
}else{  
    bloque de sentencias  
}
```

## Sentencia ?  

`condicion ? sentencia si verdad : sentencia si falso`

## Sentencia switch  

```c
switch (variable){  
    case valor1:  
        sentencia;  
        break;  
    case valor2:  
        sentencia;  
        break;  
    case valor3:  
        sentencia;  
        break;  
    default  
        sentencia;  
}
```

# Estructuras de repetición
## Sentencia for

```
for (iniciacion; condicion; modificador){  
    bloque de sentencias  
}
```

## Sentencia while  

```
while(condicion){  
    bloque de sentencias  
}
```

## Sentencia do-while  

```
do{  
    bloque de sentencias  
}while(condicion);
```

# Modificadores de ciclos

### Break  
Cuando se ejecuta una sentencia break dentro de un bucle, se termina inmediatamente el ciclo y el control, independientemente de la condicion del bucle.  

### Continue  
Forza la ejecucion de la siguiente iteracion del ciclo, sin ejecutar las sentencias que faltan del ciclo.  

# Arreglos

# Estructuras  

Una estructura es una coleccion de variables que se referencian bajo el mismo nombre, con la finalidad de mantener junta informacion que se relaciona. Una definicion de estructura forma una plantilla que se puede usar para crear variables de estructura. Las variables que forman la estructura son llamadas elementos estructurados.
Mediante la palabra clave struct se le indica al compilador que defina una plantlla de estructura.

```c
struct direccion{  
    char nombre[30];  
    char calle[40];  
    char ciudad[20];  
    char estado[3];  
    unsigned int codigo;  
};
```

Con el bloque de codigo indicado se ha definido el formato sin definir aún ninguna variable estructurada.
Se declara una variable estructurada asi:

```c
struct direccion info_direc;
```

Se pueden declarar una o más variables en una sola estructura de la siguiente forma:

```c
struct direccion{  
    char nombre[30];  
    char calle[40];  
    char ciudad[20];  
    char estado[3];  
    unsigned int codigo;  
} info_direc, binfo, cinfo;
```

# Referencias

Fundamentos de programacion en C  
<https://openlibra.com/es/book/fundamentos-de-programacion-en-c>

C, el lenguaje de programacion (audio). Disponible en:  
<https://www.ivoox.com/12394507>

Aprenda lenguaje ANCI C como si estuviera en primero. Javier Garcia de Jalón de la Fuente y otros. Escuela Superior de Ingenieros Industriales. Universidad de Navarra. Disponible en:  
<https://openlibra.com/es/book/aprenda-el-lenguaje-ansi-c-como-si-estuviera-en-primero>

Programacion en C: metodologia, algoritmos y estructura de datos. Disponible en:  
<https://intprog.files.wordpress.com/2015/08/programacion-en-c-metodologia-algoritmos-y-estructura-de-datos-editorial-mcgraw-hill.pdf>

Librerias estandard C  
<https://drive.google.com/file/d/1bXma_2ZQiCwHGV0fLSmm_4HW9-3GpCxl/view?usp=sharing>

Curso intensivo de Lenguaje C
[![Curso intensivo de Lenguaje C](https://img.youtube.com/vi/8tecJkLvAgM/0.jpg)](https://www.youtube.com/watch?v=8tecJkLvAgM)
