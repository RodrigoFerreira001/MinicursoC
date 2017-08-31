#include <stdio.h>
#include "ponto.h"
#include "retangulo.h"

int main(int argc, char *argv[]){

	Ponto p;
	setX(&p, 0);
	setY(&p, 10);

	Ponto p1;
	setX(&p1, 10);
	setY(&p1, 0);

	Retangulo r;
	setSupEsq(&r, p1);
	setInfDir(&r, p);

	printf("Area: %.2f u.a.\n", getArea(&r));

	return 0;
}
