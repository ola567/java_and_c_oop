#include <iostream>
#include "Book.h"
#include "Library.h"

using namespace std;

int main()
{
	/*string a = "Adam Mickiewicz", t = "Dziady";
	Book e;
	cout << "e: " << e << endl;
	Book b1 = { a,t };
	cout << "b1: " << b1 << endl;
	Book b2 = { "Juliusz Slowacki", "Balladyna" };
	cout << "b2: " << b2 << endl;
	Book b3 = b1;
	cout << "b3: " << b3 << " b1: " << b1 << endl;

	e = std::move(b2);
	cout << "e: " << e << " b2: " << b2 << endl;
	e.SetAuthor("Zofia Nalkowska");
	cout << "e: " << e << endl;
	e.SetTitle("Medaliony");
	cout << "e: " << e << endl;*/

	Library e;
	cout << "e: " << e << endl;
	Library l1 = { {"Boleslaw Prus", "Lalka"},
	{"Henryk Sienkiewicz", "Krzyzacy"},
	{"Fiodor Dostojewski", "Zbrodnia i kara"} };
	cout << "l1: " << l1 << endl;
	Library l2(2);
	cout << "l2: " << l2 << endl;
	l2[0] = { "Adam Mickiewicz", "Dziady" };
	l2[1] = { "Juliusz Slowacki", "Balladyna" };
	cout << "l2: " << l2 << endl;
	e = std::move(l2);
	cout << "e: " << e << " l2: " << l2 << endl;
	l1[0] = std::move(e[1]);
	cout << "l1: " << l1 << " e: " << e << endl;

	return 0;
}