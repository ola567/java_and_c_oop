#include "Prostokat.h"
#include <iostream>
#pragma once

using namespace std;

Prostokat::Prostokat(double a, double b) : a(a), b(b)
{
	cout << "Konstruktor Prostokata(" << a << ", " << b << ")" << endl;
}

double Prostokat::GetA() const
{
	return a;
}

double Prostokat::GetB() const
{
	return b;
}

void Prostokat::SetA(double a)
{
	this->a = a;
}

void Prostokat::SetB(double b)
{
	this->b = b;
}

double Prostokat::Obwod()
{
	double obwod;
	obwod = 2 * a + 2 * b;
	return obwod;
}

double Prostokat::Pole()
{
	double pole;
	pole = a * b;
	return pole;
}

void Prostokat::Wypisz(std::ostream& out) const
{
	cout << "prostokat o wymiarach a=" << this->a << " " << "b=" << this->b << endl;
}

Prostokat::~Prostokat()
{
	cout << "Destruktor prostokata (" <<a<<", "<<b<<")"<< endl;
}