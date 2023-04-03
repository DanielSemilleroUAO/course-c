#include <stdio.h>
#include <stdbool.h>
/*
	Ciclos
*/
int main(int argc, char *argv[]) {
	// Ciclo while
	int contador = 1, repeticiones = 5;
	while(contador <= repeticiones){
		printf("%d \n", contador);
		contador++;
		bool condicion = contador <= repeticiones;
		printf("%d < %d -> %d \n", contador, repeticiones, condicion);
	}
	
	// Ciclo do while
	int numero;
	do {
		printf("Ingresa un número positivo: \t");
		scanf("%d", &numero);
	} while(numero <= 0);
	
	printf("\n el valor ingresado: %d", numero);
	
	// Ciclo for
	for(int contador = 1; contador <= 5; contador++){
		printf("\n%d", contador);
	}
	
	// de 3 en tres
	for(int contador = 0; contador <= 10; contador+=3){
		printf("\n%d", contador);
	}

	
	return 0;
}

