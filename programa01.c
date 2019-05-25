/*Programa de propositos educativos, encargado de mostrar un mensaje simple en pantalla*/

/*Autor: Ing. Danny Colmenares
  @dbcolmenaresp*/

/*#include es una directiva de preprocesador que indica al preprocesador de C que busque un archivo y coloque
el contenido de ese archivo en el lugar que la directiva include lo indique
Se incluye la libreria necesaria para hacer uso de los dispositivos de entrada y salida:
teclado y monitor, conocido como archivo de encabezado de entrada salida estandar stdio.h.*/
#include <stdio.h>

// La funcion main es la principal de todo programa escrito en lenguaje C y es la primera funcion en ejecutarse
// Todo programa en lenguaje C debe contener solo una funcion main
int main(){                                    // Inico del bloque principal del programa
	
	printf("\nHOLA MUNDO!\n");                 // Sentencia encargada de mostrar un mensaje en la pantalla
	return 0;                                  // Valor de retorno de la funcion main
}                                              // Final del bloque principal del programa
