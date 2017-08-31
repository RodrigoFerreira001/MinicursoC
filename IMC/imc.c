#include <stdio.h>
#include <stdlib.h>

float calc_imc(float altura, float peso){
	return peso / (altura * altura);
}

int main(int argc, char *argv[]){

	float altura, peso;
	char sexo;

	printf("Entre com sua altura\n");
	scanf("%f",&altura);

	printf("Entre com seu peso\n");
	scanf("%f",&peso);

	printf("Entre com seu sexo\n");
	fflush(stdin);
	scanf(" %c",&sexo);


	printf("%f\n", altura);
	printf("%f\n", peso);
	printf("%c\n", sexo);

	float imc = calc_imc(altura, peso);

	if(sexo == 'M'){
		if((imc >= 0) && (imc < 20)){
			printf("seu IMC é %.2f: abaixo do normal\n", imc);
		}else
		if((imc >= 20) && (imc < 25)){
			printf("seu IMC é %f: normal\n", imc);
		}else
		if((imc >= 25) && (imc < 30)){
			printf("seu IMC é %f: obesidade leve\n", imc);
		}else
		if((imc >= 30) && (imc < 40)){
			printf("seu IMC é %f: obesidade moderada\n", imc);
		}else
		if(imc >= 40){
			printf("seu IMC é %f: obesidade mórbida\n", imc);
		}
	}else
	if(sexo == 'F'){
		if((imc >= 0) && (imc < 19)){
			printf("seu IMC é %f: abaixo do normal\n", imc);
		}else
		if((imc >= 19) && (imc < 24)){
			printf("seu IMC é %f: normal\n", imc);
		}else
		if((imc >= 24) && (imc < 29)){
			printf("seu IMC é %f: obesidade leve\n", imc);
		}else
		if((imc >= 29) && (imc < 39)){
			printf("seu IMC é %f: obesidade moderada\n", imc);
		}else
		if(imc >= 39){
			printf("seu IMC é %f: obesidade mórbida\n", imc);
		}
	}

	return 0;
}
