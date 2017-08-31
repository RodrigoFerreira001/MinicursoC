#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	FILE *in = fopen(argv[1], "r"); //Arquivo de Entrada
	FILE *out = fopen(argv[2], "w"); //Arquivo de Saida

	int value;


	while(fscanf(in, "%d", &value) == 1){

		printf("%d\n", value);

		fprintf(out, "%d\n", value);
	}

	//fecha o arquivo de entrada
	fclose(in);

	//fecha o arquivo de saida
	fclose(out);

	return 0;
}
