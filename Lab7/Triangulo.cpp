#include "Triangulo.h"

double Triangulo::area(double base, double altura) {
	double area;
	area = ((base / 2) * altura) / 2;
	return area;
}
double Triangulo::perimetro(double lado, double base) {
	double perimetro;
	perimetro = 3 * lado;
	return perimetro;
}