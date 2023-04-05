#include <stdio.h>
#include <string.h>

void imprimir(int numero)
{
    printf("%d \n", numero);
}

int suma(int a, int b)
{
    return a + b;
}

void cambiarValor(int valor)
{
    valor = 10;
}

void cambiarValorReferencia(int *valor)
{
    *valor = 200;
}

// Funcion recursiva
void imprimirValor(int numero)
{
    if (numero == 1)
    {
        printf("numero %d \n", numero);
    }
    else
    {
        printf("numero %d \n", numero);
        imprimirValor(numero - 1);
    }
}

void cambiarValorArreglo(int *parametro)
{
    parametro[0] = 1;
    parametro[1] = 2;
    parametro[2] = 3;
}

int main(int argc, char const *argv[])
{
    int argumento;
    printf("Ingrese un número: \t");
    scanf("%d", &argumento);
    imprimir(argumento);
    int a, b;
    printf("Ingrese un primer número: \t");
    scanf("%d", &a);
    printf("Ingrese un primer número: \t");
    scanf("%d", &b);
    printf("El resultado de la suma de %d + %d = %d \n", a, b, suma(a, b));

    // Ejemplo copia de valores
    int c = 10;
    int d = a;
    d = 20;
    printf("Valor de c %d \n", c);
    printf("Valor de d %d \n", d);
    // Uso de apuntadores
    int e = 10;
    int *f = &e;
    *f = 100;
    printf("Valor de e %d \n", e);
    printf("Valor de f %d \n", *f);

    // Paso por valor
    int valor = 100;
    printf("Valor antes de llamar la función: %d \n", valor);
    cambiarValor(valor);
    printf("Valor despues de llamar la función: %d \n", valor);

    // Paso por referencia
    printf("Valor antes de llamar la función: %d \n", valor);
    cambiarValorReferencia(&valor);
    printf("Valor despues de llamar la función: %d \n", valor);

    int parametro[3] = {0, 0, 0};
    printf("arreglo antes de llamar la funció: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Pos %d - valor %d \n", i, parametro[i]);
    }
    printf("\n");
    cambiarValorArreglo(parametro);
    printf("arreglo despues de llamar la funció: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Pos %d - valor %d \n", i, parametro[i]);
    }
    printf("\n");
    imprimirValor(5);
    printf("\n");

    // Funciones incorporadas
    char cadena[5] = "Hola";
    int longitud = strlen(cadena);
    printf("Cadena original: %s \n", cadena);
    printf("Longitud cadena: %d \n", longitud);
    return 0;
}
