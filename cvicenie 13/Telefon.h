#pragma once
#include "Produkt.h"
class Telefon : public Produkt
{
private:
	string nazov;
	int cena;
public:
	Telefon(string n, int c);
};

