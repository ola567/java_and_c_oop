#include "Kolo.h"
#include <iostream>

using namespace std;

Kolo::Kolo(double r) : r(r)
{
	cout << "Konstruktor Kola(" << r << ")" << endl;
}

double Kolo::GetR() const
{
	return r;
}

void Kolo::SetR(double r)
{
	this->r = r;
}

double Kolo::Obwod()
{
	double obwod;

	obwod = 2 * 3.14 * r;
	return obwod;
}

double Kolo::Pole()
{
	double pole;

	pole = 3.14 * r * r;
	return pole;

}

void Kolo::Wypisz(std::ostream& out) const
{
	cout << "Kolo:" << endl;
	cout << "r= " << r;
}

Kolo::~Kolo()
{
	cout << "Destruktor kola ( "<<r<<")" << endl;
}