#ifndef PONTO_H
#define PONTO_H

#include <math.h>

typedef struct ponto{
	int x;
	int y;
}Ponto;

void setX(Ponto *p, int x);
void setY(Ponto *p, int y);
int getX(Ponto *p);
int getY(Ponto *p);
float eucli_dist(Ponto *p1, Ponto *p2);
Ponto sum(Ponto *p1, Ponto *p2);
Ponto sub(Ponto *p1, Ponto *p2);

#endif
