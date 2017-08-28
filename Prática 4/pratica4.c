#include <stdio.h>

int quadrado(int numero){
	return numero*numero;
}

void imprime(int numero){
	printf("%d\n",numero );
}

typedef struct ponto{
	int x;
	int y;
}Ponto;

int main(int argc, char *argv[]){

	//vetor
	int valores[] = {1,2,3,4,5,6,7,8,9};
	int i,j;

	for(int i = 0; i < 9; i++){
		printf("O quadrado de %d é: ", valores[i]);
		imprime(quadrado(valores[i]));
	}


	//Matriz
	int matriz[3][3];

	printf("\nMatriz\n");
	//Preenche a Matriz
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			matriz[i][j] = i + j;
		}
	}

	//Imprime a matriz
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	Ponto a;
	a.x = 10;
	a.y = 0;

	printf("\nStruct\n");
	printf("a.x = %d\n", a.x);
	printf("a.y = %d\n", a.y);

	return 0;
}
