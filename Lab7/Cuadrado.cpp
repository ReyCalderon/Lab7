#include "Cuadrado.h"

double Cuadrado::area(double lado) {
	double area;
	area = lado * lado;
	return area;
}
double Cuadrado::perimetro(double lado) {
	double perimetro;
	perimetro = lado * 4;
	return perimetro;
}