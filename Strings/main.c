#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	char nome[50];

	printf("Qual seu nome?\n");
	fgets(nome, sizeof(nome), stdin);

	printf("Seu nome é %s\n", nome);

	//Compara duas strings
	//strcmp faz a subtração, se 0 são iguais
	if(!strcmp(argv[1], argv[2])){
		printf("%s e %s são iguais\n", argv[1], argv[2]);
	}else{
		printf("%s e %s são diferentes\n", argv[1], argv[2]);
	}

	//copia argv[1] para nome
	strcpy(nome, argv[1]);
	printf("Seu nome é %s\n", nome);


	char valor[] = "10";
	int i = atoi(valor);
	printf("%d\n", i);

	i = 15;
	sprintf(valor, "%d", i);
	printf("valor: %s\n", valor);


	return 0;
}
