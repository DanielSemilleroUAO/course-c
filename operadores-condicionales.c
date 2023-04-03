#include <stdio.h>

int main(int argc, char *argv[]) {
	// Sentencia if
	// validar si el n�mero es positivo
	printf("Ingresa un n�mero: \t");
	int miNumero;
	scanf("%d", &miNumero);
	if(miNumero > 0){
		printf("El n�mero es positivo: %d", miNumero);
	} else if(miNumero == 0){
		printf("El valor es 0");
	} else {
		printf("El n�mero es negativo: %d", miNumero);
	}
	
	printf("\n");
	// Operador ternario
	(miNumero > 0) ? printf("Positivo"): printf("Negativo");
	printf("\n");
	printf("Ingresa el d�a de la semana (n�mero): \t");
	scanf("%d", &miNumero);
	printf("\n");
	
	// switch
	switch(miNumero){
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		printf("Es un d�a valido");
		break;
	default:
		printf("No es un d�a valido");
		break;
	}
	return 0;
}

