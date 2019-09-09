//Codigo fuente para ver el comportamiento del operador ternario ?

#include <stdio.h>

int main(){
	int numero1, numero2;
	
	//Se solicita el ingreso del primer numero
	printf("Indique el numero 1\n");
	scanf("%d", &numero1);
	
	//Se solicita el ingreso del segundo numero
	printf("Indique el numero 2\n");
	scanf("%d", &numero2);
	
	//Se hace la comparacion entre el numero 1 y el numero 2 y se muestra el mensaje correspondiente
	numero1 > numero2 ? printf("el numero 1 es el mayor\n") : printf("El numero 2 es el mayor o son iguales\n");
	
	return 0;
}
