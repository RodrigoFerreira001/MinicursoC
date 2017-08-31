#include "ponto.h"

void setX(Ponto *p, int x){
	p->x = x;
}

void setY(Ponto *p, int y){
	p->y = y;
}

int getX(Ponto *p){
	return p->x;
}

int getY(Ponto *p){
	return p->y;
}

float eucli_dist(Ponto *p1, Ponto *p2){
	return sqrt(pow((p1->x - p2->x), 2) + pow((p1->y - p2->y), 2));
}

Ponto sum(Ponto *p1, Ponto *p2){
	Ponto p;
	p.x = p1->x + p2->x;
	p.y = p1->y + p2->y;
	return p;
}

Ponto sub(Ponto *p1, Ponto *p2){
	Ponto p;
	p.x = p1->x - p2->x;
	p.y = p1->y - p2->y;
	return p;
}
