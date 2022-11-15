#include "AreaPer.h"

double AreaPer::area(double lados, double apotema) {

	double area;
	area = (lados * apotema) / 2;
	return area;
}

double AreaPer::perimetro(double lados, double cantidad) {
	double area;
	area = lados * cantidad;
	return area;
}