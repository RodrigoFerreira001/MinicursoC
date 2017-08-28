#include <stdio.h>

int main(int argc, char *argv[]){

	//Declaração de variáveis
	int a = 10;
	int b = 20;
	int c = 15;

	printf("a = %d\n", a);
	printf("b = %d\n\n", b);

	if(a > b){
		printf("a é maior que b\n");
	}else{
		printf("b é maior que a\n");
	}

	if((c < b) && (c > a)){
		printf("c está entre a e b\n");
	}else
	if((c > b) || (c > a)){
		printf("c é maior que a ou b\n");
	}

	if(!(a > b) && (a != c)){
		printf("a não é maior que b, e a é diferente de c\n");
	}

	//Switch
	switch (a) {
		case 0:
			printf("a vale 0\n");
		break;

		case 50:
			printf("a vale 50\n");
		break;

		case 10:
			printf("a vale 10\n");
		break;

		default:
			printf("o valor de a é indeterminado\n");
		break;
	}

	//Operador ternário

	a = (b > c) ? 8 : 9;
	printf("O novo valor de a é: %d\n", a);

	return 0;
}
