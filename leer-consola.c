#include <stdio.h>

/*
	Leer datos desde consola
*/
int main(int argc, char *argv[]) {
	int miNumero;
	printf("Ingresa un número:\n");
	// Leermos información del usuario
	scanf("%d", &miNumero);
	printf("\n%d", miNumero);
	
	int tamanoCadena = 10;
	char cadena[tamanoCadena];
	printf("\nIngresa tu nombre:");
	//scanf("%[^'\n']s", cadena);
	fgets(cadena,tamanoCadena,stdin);
	gets(cadena);
	printf("\nTu nombre es %s", cadena);
	
	return 0;
}

