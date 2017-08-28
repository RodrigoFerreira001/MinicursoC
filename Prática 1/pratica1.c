#include <stdio.h>

int main(int argc, char *argv[]){


	//Tipos de dados
	char c = 'R';
	double d = 5.0;
	float f = 1.5f;

	printf("c = %c\n", c);
	printf("d = %.2f\n", d);
	printf("f = %.2f\n", f);

	//Declaração de variáveis
	int a = 10;
	int b = 20;

	printf("a = %d\n", a);
	printf("b = %d\n\n", b);

	/*

	Isso é um comentário de bloco!

	*/

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a / b = %d\n", a / b);
	printf("a * b = %d\n", a * b);
	printf("a %% b = %d\n", a % b); // Resto da divisão de a por b


	return 0;
}
