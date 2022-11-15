#include "Formas.h"

double Formas::area(double base, double apotema, int lados) {
	double area;
	area = (base * apotema * lados) / 2;
	return area;
}

double Formas::perimetro(double base, int lados) {
	double perimetro;
	perimetro = base * lados;
	return perimetro;
}