#include <iostream>
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

using namespace std;

//overloaded functions
float suma(int a, int b)
{
	return a + b;
}
float suma(float a, float b)
{
	return a + b;
}
float suma(int a, float b)
{
	return a + b;
}

int main()
{
	Prostokat prostokat(3, 4);
	cout << prostokat.Obwod() << endl;
	cout << prostokat.Pole() << endl;
	cout << prostokat <<endl;

	/*Kolo kolo(4);
	FiguraPlaska* wskaznik;
	wskaznik = &kolo;
	cout << (wskaznik->Obwod()) << endl;
	kolo.SetR(3);
	double promien = kolo.GetR();
	cout << promien << endl;*/

	//wirtulane klasy i polimofizm

	/*Trojkat t(3, 4, 5);
	Kolo k(1);
	Prostokat p(1,2);*/

	/*FiguraPlaska* wsk;
	wsk = &k;
	double x = wsk->Obwod();
	double y = wsk->Pole();
	cout << x << " " << y << endl;

	wsk = &t;
	double m = wsk->Obwod();
	double n = wsk->Pole();
	cout << m << " " << n << endl; */

	//ewentualna tablica do polim
	Trojkat t(3, 4, 5);
	Kolo k(3);
	Prostokat p(1, 2);

	FiguraPlaska* tab[3] = { &t, &k, &p };

	for (int i = 0; i < 3; i++)
	{
		cout << tab[i]->Obwod() << endl;
	}

	/*roznica miedzy overloading i overriding
	cout << suma(1, 2) << endl;
	cout << suma(1.5f, 2.4f) << endl;
	cout << suma(1, 3.5f) << endl;*/
	
}