#ifndef RETANGULO_H
#define RETANGULO_H

#include "ponto.h"
#include "math.h"

typedef struct retangulo{
	Ponto sup_esq;
	Ponto inf_dir;
}Retangulo;

void setSupEsq(Retangulo *r, Ponto p);
void setInfDir(Retangulo *r, Ponto p);
Ponto getSupEsq(Retangulo *r);
Ponto getInfDir(Retangulo *r);
float getArea(Retangulo *r);

#endif
