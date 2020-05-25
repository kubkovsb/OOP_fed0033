#include "Katalog.h"
#include <iostream>
using namespace std;

Katalog::Katalog(int velkost)
{
	this->velkostkatalogu = velkost;
	this->p = new Produkt * [velkost];
	this->pocetproduktov = 0;
	
}
void Katalog::PridatDoKatalogu(Produkt* prod)
{
	this->p[this->pocetproduktov] = prod;  // works the same as School , size of katalog increases everytime
	this->pocetproduktov++;
}
void Katalog::VypisKatalogu()
{
	cout << " Toto je vypis produktov z katalogu" << endl;
	for (int i = 0; i < this->pocetproduktov; i++)
	{
		cout <<"Produkt   "<< p[i]->GetNazov()<< "  --->  " << p[i]->cena <<"eur"<< endl;
	}
	cout << "Pridajte Lubovolny produkt do objednavky" << endl;
}