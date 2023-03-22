#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	// Declarar una variable
	int miNumero;
	// Inicialización de la variable
	miNumero = 10;
	// Imprimir la variable
	printf("\n El numero es: %d", miNumero);
	// Modificamos la variable
	miNumero = 20;
	printf("\n El numero es: %d", miNumero);
	
	// Imprimir variables
	int miNumero2 = 0, miNumero3 = 30;
	printf("\n %d %d", miNumero2, miNumero3);
	
	// Reglas de nombres
	// 1.Sensible a mayusculas y minusculas
	// 2. No usar palabras reservadas (keywords)
	// 3. Usar camelcase -> miNumero
	// 4. Iniciar con letras o con _
	// 5. No debe iniciar con números o caracteres especiales
	// 6. Después del primer caracter se puede usar _ o caracteres especiales
	// 7. Los nombres no puede tener espacios en blanco
	// 8. Usar nombres descriptivos, no solo una letras
	
	int miVariable = 10;
	printf("%d", miVariable);
	
	// Varios tipos de datos
	/*
	Datos básicos
	*/
	// Tipo entero %d o %i
	int entero = 10;
	printf("\n%d", entero);
	// Tipo float %f
	float decimal = 6.5;
	printf("\n%.2f", decimal);
	// Tipo double %lf
	double doble = 15.4;
	printf("\n%.2lf", doble);
	// Tipo char %c
	char caracter = 'A';
	printf("\n%c", caracter);
	char caracterDecimal = 65;
	printf("\n%c", caracterDecimal);
	
	// Tipo bool %d
	bool logico = true;
	printf("\n%d", logico);
	
	// Arreglo - conjunto de datos %s
	char cadena[] = "Hola mundo";
	printf("\n%s", cadena);
	
	// Tipo cadena
	char cadena2[10] = "Saludos";
	printf("\n%s", cadena2);
	
	// Imprimir dirección de memorias %p
	printf("\n%p", &cadena);
	
	
	return 0;
}

