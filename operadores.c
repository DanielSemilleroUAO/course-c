#include <stdio.h>

int main(int argc, char *argv[]) {
	// Operadores aritmeticos
	int a, b, c, e, f;
	float d;
	
	a = 3 + 4;
	printf("%d \n", a);
	b = 6 - 2;
	printf("%d \n", b);
	c = a * 2;
	printf("%d \n", c);
	d = b / 2.5;
	printf("%.2f \n", d);
	f = 9 % 2;
	printf("%d \n", f);
	
	// Operadores decremento e incremento
	a = 0;
	// Pre incremento
	++a;
	printf("%d \n", a);
	// Post incremento
	a++;
	printf("%d \n", a);
	
	// Ejemplo
	a = 5, b = 2;
	c = ++a * b++;
	printf("%d \n", c);
	printf("%d \n", b);
	
	a= 5, b = 2;
	c = --a * b--;
	printf("%d \n", c);
	return 0;
}

