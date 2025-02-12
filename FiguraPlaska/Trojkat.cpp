#include "Trojkat.h"
#include <iostream>
#include <cmath>

using namespace std;

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c)
{
	cout << "Konstruktor Trojkata(" << a << ", " << b << ","<< c <<")" << endl;
}

double Trojkat::GetA() const
{
	return a;
}

double Trojkat::GetB() const
{
	return b;
}

double Trojkat::GetC() const
{
	return c;
}

void Trojkat::SetA(double a)
{
	this->a = a;
}

void Trojkat::SetB(double b)
{
	this->b = b;
}

void Trojkat::SetC(double c)
{
	this->c = c;
}

double Trojkat::Obwod()
{
	double obwod;
	obwod = a+b+c;
	return obwod;
}

double Trojkat::Pole()
{
	double pole;
	double p;

	p = (a + b + c)/2;
	pole = sqrt(p * (p - a) * (p - b) * (p - c));
	return pole;

}

void Trojkat::Wypisz(std::ostream& out) const
{
	cout << "Trojkat:" << endl;
	cout << "a= " << a;
	cout << "b= " << b;
	cout << "c= " << c;
}

Trojkat::~Trojkat()
{
	cout << "Destruktor trojkata ( " <<a<<", "<<b<<", "<<c<<")" << endl;
}