#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
	int x;
	int y;
}Ponto;

int main(int argc, char *argv[]) {

	int a = 10;
	int *b = &a;

	printf("Valores:\n");
	printf("a: %d\n", a);
	printf("b: %d\n", *b);

	printf("\nEndereços:\n");
	printf("a: %p\n", &a);
	printf("b: %p\n", &b);

	printf("\nConteúdo de b:\n");
	printf("b: %p\n", b);
	printf("Endereço de a:\n");
	printf("b: %p\n", &a);

	printf("\nMudei o valor de b para 20\n");
	*b = 20;
	printf("Valor de a: %d\n", a);
	

	Ponto *p = (Ponto *) malloc(sizeof(Ponto));
	(*p).x = 10;
	(*p).y = 0;

	printf("\nPonto: (%d,%d)\n", p->x, p->y);

  	return 0;
}
