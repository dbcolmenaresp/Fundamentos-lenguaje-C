# Fundamentos del lenguaje de programación C

[El lenguaje de programación](https://es.wikipedia.org/wiki/Lenguaje_de_programaci%C3%B3n) [C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n))es un lenguaje de rogramación orientado inicialmente al desarrollo de sistemas, que puede ser usado tambien para el desarrollo de programas de proposito general. El lenguaje de progamación C puede ser usado en las etapas tempranas del aprendizaje de programacion para aclarar el uso adecuado de los diferentes conceptos basicos de la programacion, como el uso adecuado de los tipos de datos, el uso de las diferentes estructuras como condicionales, repeticiones, etc. Fue desarrollado en los laboratorios AT&T por [Dennis Ritchie](https://es.wikipedia.org/wiki/Dennis_Ritchie "Biografia de Dennis Ritchie"), quien en colaboracion con [Ken Thompson](https://es.wikipedia.org/wiki/Ken_Thompson "Biografia de Ken Thompson") crearon el [sistema operativo](https://es.wikipedia.org/wiki/Sistema_operativo) [UNIX](https://es.wikipedia.org/wiki/Unix). C es el lenguaje de pogramacion de alto nivel de proposito general más popular.  

Para comenzar a programar en cualquier lenguaje de programacion, se deben tener inicialmente claros los conceptos del desarrollo de algoritmos, con la finalidad de plantear la estructura de nuestros programas y revisar su comportamiento y eficacia. Para tener un mejor conocimiento sobre los algoritmos se aconseja revisar el siguiente recurso:

[Fundamentos de Algoritmos](https://github.com/dbcolmenaresp/fundamentosalgoritmos)

# Breve historia del lenguaje C

C es un lenguaje de programación de alto nivel creado por Dennis Ritchie para codificar el sistema operativo UNIX.

- [BCPL](https://es.wikipedia.org/wiki/BCPL_(lenguaje_de_programaci%C3%B3n)): desarrollado en 1969 por [Martin Richards](https://es.wikipedia.org/wiki/Martin_Richards "Biografia de Martin Richards") como un lenguaje para escribir software de sistemas operativos y [compiladores](https://es.wikipedia.org/wiki/Compilador).
- [B](https://es.wikipedia.org/wiki/B_(lenguaje_de_programaci%C3%B3n)): Ken Thompson uso muchas caracteristicas de CPL y uso B para crear una temprana version del sistema operativo UNIX en los laboratorios Bell en 1970 en una computadora DEC PDP-7.
BCPL y B eran lenguajes de programacion sin tipado, la labor de elegir entre los tipos de datos era responsabilidad del programador.
- [C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)): C fuen creado a partir de B por Dennis Ritchie en los laboratorios Bel y fue originalmente implementado en una computadora DEC PDP-11 en 1972, inicialmente usado para implementar el sistema operativo UNIX, usa muchos conceptos de BCPL y B con la adicion del tipado de datos y otras caracteristicas.
- [C++](https://es.wikipedia.org/wiki/C%2B%2B): es una extension de C creada por [Bjarne Stroustup](https://es.wikipedia.org/wiki/Bjarne_Stroustrup) a principios de 1980 en los laboratorios Bell. Entre las caracteristicas agregadas a C++ la mas importante es que provee las posibilidades de programacion orientada a objetos.

# Características del lenguaje C

- El lenguaje de programación C posee un alto nivel de portabilidad aportado por la gran cantidad de compiladores para cada sistema operativo. La implementación de un programa depende del compilador y de las bibliotecas incluidas.
- Lenguaje de proposito general lo cual significa que con este lenguaje de programacion se puede desarrollar programas para resolver problemas de una muy amplia gama de propositos.
- C es un lenguaje de programación estructurado, puesto que permite el uso de bloques de sentencias agrupadas dentro de instrucciones de control y bucles.
- Lenguaje de alto nivel las sentencias que conforman el lenguaje se expresan en un lenguaje que se entiende facilmente, parecido al lenguaje inglés con reglas estrictas de sintaxis, lo que aporta legibilidad y facilidad de mantenimiento a los programas desarrollados en este lenguaje.
- Lenguaje compilado, el codigo fuente conformado por una serie de sentencias en lenguaje de alto nivel es traducido a traves del proceso de compilacion, en un archivo en lenguaje de maquina en codigo binario que entiende y ejecuta el computador.
- Lenguaje con tipado de datos el lenguaje proporciona la verificacion del tipo de datos con el que realiza las operaciones.
- El lenguaje de programación c se puede utilizar para crear programas de bajo nivel debido a que permite la ejecución de sentencias para el control de bits individuales, con lo cual cubre el vacío existente entre los lenguajes de máquina y los lenguajes de alto nivel convencionales.
- El lenguaje C permite la manipulacion directa de bits, bytes, palabras y punteros, esto le hace particularmente adecuado para la programacion de sistemas, en la que estas operaciones son muy comunes.
- El lenguaje C posee un repertorio de sentencias básico, y reducido, lo cual contribuye a reducir la curva de aprendizaje. Este reducido número de instrucciones es compensado por una gran cantidad de funciones de biblioteca que se encargan de realizar labores especializadas de los programas.
- El lenguaje C tiene solo 32 palabras clave (27 estandard originales y 5 añadidas por el comite de estandarizacion de ANSI), numero micho menor al que contienen otros lenguajes de programacion de alto nivel.

# Razones para usar el lenguaje C

- De facil aprendizaje por ser un lenguaje formado por pocas palabras clave y pocos comandos que recordar, que aunado a la facilidad de comprension por ser un lenguaje de alto nivel, permite comprender la programacion en el lenguaje C con relativa facilidad.
- Potencia y versatilidad se pueden hacer muchas cosas con este lenguaje.
- Eficiencia los programas escritos en el lenguaje de programación C se traducen a lenguaje de máquina para la plataforma en la cual se compila, lo cual contribuye a la obtencion de programas mas eficientes.
- Portabilidad multiplataforma los programas hechos en este lenguaje pueden ser ejecutados en diferentes plataformas para las cuales exista un compilador que convierta adecuadamente el codigo fuente en el lenguaje de maquina correspondiente.
- Es la base de otros lenguajes la mayoria de lenguajes modernos derivan a partir de este, lo cual supone la ventaja de poder aplicar los conocimientos adquiridos en la programacion en C, en la programacion con otros lenguajes similares mas modernos y 
utilizados que se basan en la sintaxis del lenguaje C. Algunos de los lenguajes cuya sintaxis deriva del lenguaje C son:

	- [C++](https://es.wikipedia.org/wiki/C%2B%2B) es una version ampliada del lenguaje C que agrega la posibilidad de usar caracteristicas de la programacion orientada a objetos, usado para desarrollar aplicaciones de escritorio y videojuegos de diferentes plataformas.
	- [Java](https://es.wikipedia.org/wiki/Java_(lenguaje_de_programaci%C3%B3n)), [javascript](https://es.wikipedia.org/wiki/JavaScript), [PHP](https://es.wikipedia.org/wiki/PHP) usados principalmente para el desarrollo de aplicaciones web.
	- [Objetive-C](https://es.wikipedia.org/wiki/Objective-C) usado para desarrollar aplicaciones en la plataforma iOS.
	- [C#](https://es.wikipedia.org/wiki/C_Sharp) usado para desarrollar aplicaciones de Windows Phone y juegos de XBOX 360.
	- [Perl](https://es.wikipedia.org/wiki/Perl) es un conocido lenguaje usado para el diseño web en sus inicios, actualmente muy usado en labores de administracion de sistemas.
	
## Recomendaciones para el uso efectivo del lenguaje C

- Para mantener el alto nivel de portabilidad del lenguaje de programación C, se debe usar en los programas escritos solo las sentencias y palabras reservadas estandarizadas en el ANSI C, esto debido a que todos los compiladores disponibles deben respetar este estándar.

# Etapas en la creación de un programa en lenguaje C

Para realizar el proceso de creación de un programa ejecutable en lenguaje C, a partir de la edición de un código fuente que cumpla con las normas sintácticas del lenguaje, se utilizan una serie de programas para realizar este proceso. A continuación se detallan las etapas que se realizan para la construcción de un programa en lenguaje C

## Edición

Para crear un programa en lenguaje C se inicia por edita un archivo de texto plano que contiene el código fuente, el cual debe contener una serie de sentencias que deben que deben cumplir en primera instancia la sintaxis del lenguaje de programación C, es decir deben ser sentencias validas del lenguaje. Adicionalmente a ello, se debe garantizar que dicho código fuente sea correcto lógicamente, es decir que realice de manera correcta aquella labor para la cual fue diseñado inicialmente.

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

## Palabras clave de ANSI C
En el lenguaje c se han establecido una serie de palabras reservadas que realizan tareas específicas y no pueden ser usadas como identificadores.

Se aconseja usar solo las palabras reservadas establecidas en el estándar ANSI C con la finalidad de facilitar la portabilidad de los programas escritos en lenguaje C, ya que todos los compiladores deben implementar estas para la construcción de programas.

auto		double		int		struct
break		else		long		switch
case		enum		register	typedef
char		extern		return		union
const		float		short		unsigned
continue	for		signed		void
default		goto		sizeof		volatile
do		if		static		while

## Identificador
Un identificador es un nombre simbólico que se refiere a un dato, función o programa.
Se debe indicar de manera explícita el nombre de cada dato y función y que tipo de dato va a representar cada uno de ellos.
El nombre de un identificador debe elegirse de forma tal que guarde una estrecha relación con el sentido físico, matemático o real del dato que representa, esto con la finalidad de facilitar el proceso de corrección y mantenimiento de los programas.
El modo más básico de ubicar un dato en memoria es a través de un número que representa la dirección de memoria en la cual se encuentra almacenado dicho dato, pero este mecanismo presenta dos dificultades:
- No hay un vínculo nemotécnico que permita relacionar la dirección de memoria donde se encuentra almacenado un dato con su contenido.
- La dirección donde se almacena un dato cambia en cada ejecución del programa.
Internamente se referencia cada dato usado en el programa con una tabla que relaciona cada identificador con el tipo de dato que representa y la posición de memoria en la que está almacenado.
Para seleccionar un identificador, se deben seguir las siguientes reglas:
1. Un identificador se forma por una secuencia de letras (minúsculas de la ‘a’ a la ‘z’, mayúsculas de la ‘A’ a la ‘Z’) y dígitos (del ‘0’ al ‘9’).
2. El carácter subrayado o guion bajo (‘_’) se considera como otra letra más.
3. Un identificador no puede contener espacios en blanco o caracteres distintos de los indicados (* , ; . : + - etc.).
4. El primer carácter de un identificador debe ser una letra o un guion bajo, nunca se debe usar como primer carácter del identificador un número.
5. Se discrimina entre letras mayúsculas y minúsculas.
6. El estándar ANSI C permite definir identificadores de hasta 31 caracteres de longitud.
7. No se puede usar ninguna palabra clave de ANSI C como identificador.

### Ejemplos de identificadores validos y no validos

Identificadores validos:

cont
prueba23
Balance_total

Identificadores no validos

1cont
hola!
balance..total

Es de resaltar que los compiladores de lenguaje C distinguen entre letras mayusculas y minusculas, en lo cual el identificador cuenta, Cuenta y CUENTA son tres identificadores diferentes.

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

# Operadores

Los operadores son signos especiales o conjuntos de caracteres que indican determinadas operaciones a realizar con las variables.

## Operadores aritméticos

## Operadores de comparación

## Operadores lógicos

## Orden de procedencia

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

## Operador tenario ?:

Esta sentencia se puede usar para remplazar el condicional 'if - else' en expresiones sencillas.

La sentencia es un operador tenario debido a que necesita tres operadores para su correcto funcionamiento, como se indica a continaución.

`condicion ? sentencia si verdad : sentencia si falso`

En esta expresión se evalua la condicion, en caso de ser cierta se ejecuta la sentencia ubicada antes del caracter ':', en caso contrario se ejecuta la sentencia ubicada despues del caracter ':'.

En el código fuente llamado 'operadorternario.c', se solicita al usuario que ingrese dos números enteros.

```c
	//Se solicita el ingreso del primer numero
	printf("Indique el numero 1\n");
	scanf("%d", &numero1);
	
	//Se solicita el ingreso del segundo numero
	printf("Indique el numero 2\n");
	scanf("%d", &numero2);
```
A continuación se evalua la sentencia que compara los valores *numero1* y *numero2* con el uso del operador ternario ?

```c
numero1 > numero2 ? printf("el numero 1 es el mayor\n") : printf("El numero 2 es el mayor o son iguales\n");
```

Se hace la comparación entre el número 1 y el número 2 y se muestra el mensaje correspondiente.  
	- Si el número 1 es mayor que el número 2, se muestra el primer mensaje,  
	- En caso contrario se muestra el segundo.  

### Actividad

Desarrolle un programa en lenguaje C que solicite la edad del usuario, en caso de ser menor de 18 muestre el mensaje *Es menor de edad*, en caso de ser igual o mayor a 18 muestre el mensaje *Es mayor de edad*, este usando el operador ternario ?. 

Edite el código fuente con cualquier editor de texto, Notepad, [Notepad++](https://notepad-plus-plus.org/), compílelo en su computador con el compilador [Devc++](http://orwelldevcpp.blogspot.com/) o edítelo y ejecútelo en línea en la plataforma [Paiza.io](https://paiza.io/es), compruebe su funcionamiento y suba el código fuente con la explicación del funcionamiento del mismo a la plataforma GitHub.

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

# FUNCIONES

Una función en C es una porción de código que realiza una determinada tarea, tiene un identificador asociado que se usa para hacer referencia a ella desde cualquier lugar dentro del código fuente, se indica un tipo de valor de retorno que es el que se recupera luego de la ejecución de la función y a la misma se le indican una serie de argumentos cuyos valores toma para realizar su tarea específica.

La estructura de una función se muestra a continuación:

```
Tipo_de_retorno nombre_de_funcion(argumentos){
	Cuerpo de la función
}
```

Una función dentro de un programa aparece en tres diferentes oportunidades, a saber

- *Declaración de la función*, se indica el tipo de retorno, el nombre de la función y los argumentos sin definir el cuerpo de la función, esta se hace al inicio del código fuente para indicarle al compilador que existe la función, los argumentos son una lista de nombres de variables separadas por comas que indican los valores que se requieren para ejecutar la función adecuadamente.

- *Definición de la función*, se indica nuevamente el tipo de retorno, el nombre de la función, los argumentos y se detallan las sentencias que componen el cuerpo de la función.

- *Llamada de la función*, ocurre en cualquier lugar del código fuente donde se coloca el nombre de la función y la lista de argumentos y le indica al programa que debe ir hasta la función, enviando los argumentos indicados y retornar el valor obtenido de la ejecución de la función para su uso.

# Estructura de una función en lenguaje C

```
Tipo_retorno nombre_funcion(parametros){  
    variables locales  
    sentencias de C  
    sentencia de retorno  
}
```  

# Referencias

Díaz, J. y Muñoz R. (2008). *Fundamentos del sistema operativo UNIX*. Departamento de Informática y Automática. Universidad de Educación a Distancia (UNED).

Tejada, H. (s/f). *Manual de C*.

*Fundamentos de programacion en C*  
<https://openlibra.com/es/book/fundamentos-de-programacion-en-c>

*C, el lenguaje de programacion* (audio). Disponible en:  
<https://www.ivoox.com/12394507>

García, J. y otros. (1998). *Aprenda lenguaje ANCI C como si estuviera en primero*. Javier Garcia de Jalón de la Fuente y otros. Escuela Superior de Ingenieros Industriales. Universidad de Navarra. Disponible en:  
<https://openlibra.com/es/book/aprenda-el-lenguaje-ansi-c-como-si-estuviera-en-primero>

*Curso intensivo de Lenguaje C*  
[![Curso intensivo de Lenguaje C](https://img.youtube.com/vi/8tecJkLvAgM/0.jpg)](https://www.youtube.com/watch?v=8tecJkLvAgM)

*Programacion en C: metodologia, algoritmos y estructura de datos*. Disponible en:  
<https://intprog.files.wordpress.com/2015/08/programacion-en-c-metodologia-algoritmos-y-estructura-de-datos-editorial-mcgraw-hill.pdf>

*Librerias estandard C*  
<https://drive.google.com/file/d/1bXma_2ZQiCwHGV0fLSmm_4HW9-3GpCxl/view?usp=sharing>

*Lista de reproduccion de videos relacionados con Lenguaje C*. Disponible en:  
https://www.youtube.com/playlist?list=PLCZKC1YTwC0miD2BDa_JhP4dxB1M3-iRR


# Glosario

- Compilador: Programa que toma como entrada un texto escrito en un lenguaje de programación de alto nivel denominado código fuente y da como salida otro texto en un lenguaje de bajo nivel en código máquina.

- Modularización: Es el proceso que consiste en dividir un programa muy grande en una serie de módulos mucho más pequeños y manejables.
