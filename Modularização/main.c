#include <stdio.h>
#include "ponto.h"

int main(int argc, char *argv[]){

	Ponto p;
	setX(&p, 0);
	setY(&p, 0);

	Ponto p1;
	setX(&p1, 10);
	setY(&p1, 0);

	printf("p(%d,%d)\n", getX(&p), getY(&p));
	printf("p1(%d,%d)\n", getX(&p1), getY(&p1));

	printf("Distância de p até p1: %.2f u.d. \n", eucli_dist(&p, &p1));

	Ponto p2 = sum(&p, &p1);
	Ponto p3 = sub(&p, &p1);

	printf("p + p1 :(%d,%d)\n", getX(&p2), getY(&p2));
	printf("p - p1 :(%d,%d)\n", getX(&p3), getY(&p3));

	return 0;
}
