#include <stdio.h>

int main(int argc, char *argv[]){

	int i = 0;

	printf("For:\n");
	for(i = 0; i < 10; i++){
		printf("%d\n", i);
	}

	i = 10;
	printf("\nWhile:\n");
	while (i >= 0) {
		printf("%d\n", i);
		i--;
	}

	printf("\nDo-While:\n");
	do{
		printf("%d\n", i);
	}while(i > 0);

	return 0;
}
