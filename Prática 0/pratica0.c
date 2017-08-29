#include <stdio.h>

int main(int argc, char *argv[]){

	int idade;
	char nome[10];

	printf("Entre com seu nome:\n");
	scanf("%s", nome);

	printf("Entre com sua idade:\n");
	scanf("%d", &idade);

	printf("Bem vindo à SECOMP %s\n", nome);
	printf("Sua idade é %d anos\n", idade);

	return 0;
}
