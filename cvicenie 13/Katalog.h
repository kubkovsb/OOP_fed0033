#pragma once
#include "Produkt.h"
class Katalog
{
private :
	
	int velkostkatalogu;
	int pocetproduktov;
public:
	Katalog(int velkost);
	void PridatDoKatalogu(Produkt* prod);
	void VypisKatalogu();
	Produkt** p;
	
};

