#include "retangulo.h"

void setSupEsq(Retangulo *r, Ponto p){
	r->sup_esq = p;
}

void setInfDir(Retangulo *r, Ponto p){
	r->inf_dir = p;
}

Ponto getSupEsq(Retangulo *r){
	return r->sup_esq;
}

Ponto getInfDir(Retangulo *r){
	return r->inf_dir;
}

float getArea(Retangulo *r){
	float base = r->inf_dir.x - r->sup_esq.x;
	float altura = r->sup_esq.y - r->inf_dir.y;

	return base * altura;
}
