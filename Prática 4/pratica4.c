#include <stdio.h>

int quadrado(int numero){
	return numero*numero;
}

void imprime(int numero){
	printf("%d\n",numero );
}

int main(int argc, char *argv[]){

	int valores[] = {1,2,3,4,5,6,7,8,9};
	int i;

	for(int i = 0; i < 9; i++){
		printf("O quadrado de %d é: ", valores[i]);
		imprime(quadrado(valores[i]));
	}

	return 0;
}
