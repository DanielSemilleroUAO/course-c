#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	int tamanoCadena = 10;
	char nombre[tamanoCadena];
	int edad;
	float sueldo;
	int isConfianzaTemp;
	bool isConfianza;
	printf("Ingresa tu nombre completo: \n");
	gets(nombre);
	printf("Ingresa tu edad: \n");
	scanf("%d",&edad);
	printf("Ingresa tu sueldo (USD): \n");
	scanf("%f", &sueldo);
	printf("Eres empleado de confianza (1/0): \n");
	scanf("%d",&isConfianzaTemp);
	isConfianza = isConfianzaTemp;
	printf("\n La información proporcionada es:");
	printf("\n Nombre: %s", nombre);
	printf("\n edad: %d", edad);
	printf("\n sueldo: %.2f", sueldo);
	printf("\n empleado confianza: %d", isConfianza);
	
	return 0;
}

