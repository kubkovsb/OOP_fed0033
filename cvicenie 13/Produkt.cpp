#include "Produkt.h"
Produkt::Produkt(string n, int c)
{
	this->nazov = n;
	this->cena = c;

}
string Produkt::GetNazov()
{
	return this->nazov;
}
int Produkt::GetCenu()
{
	return this->cena;
}