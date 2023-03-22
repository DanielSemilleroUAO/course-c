#include <stdio.h>
#include <stdbool.h>

#define PI 3.1416

#include <math.h>

int main(int argc, char *argv[]) {
	const int MI_CONSTANTE = 5;
	printf("%d \n", MI_CONSTANTE);
	printf("%.4f \n", PI);
	printf("%.4f \n", M_PI);
	
	const int SEGUNDO_POR_MINUTOS = 60;
	printf("%d \n", SEGUNDO_POR_MINUTOS);
	
	// sizeof
	
	int entero;
	float flotante;
	double doble;
	char caracter;
	char cadena[] = "Hola mundo";
	bool logico = true;
	
	// sizeof -> ENTERO POSITIVO (unsigned) LONG (%lu)
	printf("%lu \n", sizeof(entero));
	printf("%lu \n", sizeof(flotante));
	printf("%lu \n", sizeof(doble));
	printf("%lu \n", sizeof(caracter));
	printf("%lu \n", sizeof(cadena));
	printf("%lu \n", sizeof(logico));
	
	
	return 0;
}

