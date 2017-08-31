#include <stdio.h>
#include <stdlib.h>

void print_array(int tamanho, int *vetor){
	int i;
	for(i = 0; i < tamanho; i++){
		printf("%d\n",*(vetor + i));
	}
}

void print_matriz(int linhas, int colunas, int **matriz){
	int i,j;

	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]){

	int *vetor = malloc(sizeof(int) * 10);

	int i = 0, j = 0;

	for(i; i < 10; i++){
		vetor[i] = i;
	}

	print_array(10, vetor);

	printf("\n-------- vetor2 ---------\n");

	int vetor2[10];
	for(i = 9; i >= 0; i--){
		*(vetor2 + i) = i;
	}

	for(i = 9; i >= 0; i--){
		//*(vetor2 + i) = i;
		printf("%d\n", vetor[i]);
	}

	printf("\n-------- Matriz ---------\n");

	int linhas = 4;
	int colunas = 5;

	int **matriz = (int**) malloc(sizeof(int *) * linhas);
	for(i = 0; i < linhas; i++){
		matriz[i] = (int *) malloc(sizeof(int) * colunas);
	}

	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			matriz[i][j] = i + j;
		}
	}

	print_matriz(linhas, colunas, matriz);

	printf("\n-------- limpeza ---------\n");
	free(vetor);

	for(i = 0; i < linhas; i++){
		free(matriz[i]);
	}

	free(matriz);

	return 0;
}
