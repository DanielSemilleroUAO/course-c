#include <stdio.h>

int main(int argc, char *argv[]) {
	// Sentencia if
	// validar si el número es positivo
	printf("Ingresa un número: \t");
	int miNumero;
	scanf("%d", &miNumero);
	if(miNumero > 0){
		printf("El número es positivo: %d", miNumero);
	} else if(miNumero == 0){
		printf("El valor es 0");
	} else {
		printf("El número es negativo: %d", miNumero);
	}
	
	printf("\n");
	// Operador ternario
	(miNumero > 0) ? printf("Positivo"): printf("Negativo");
	printf("\n");
	printf("Ingresa el día de la semana (número): \t");
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
		printf("Es un día valido");
		break;
	default:
		printf("No es un día valido");
		break;
	}
	return 0;
}

