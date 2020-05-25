#pragma once
#include "Produkt.h"
#include "Zakaznik.h"
class Objednavka
{
private :
	Produkt** p;
	int pocetpoloziek;
	int velkost;
	Zakaznik* zakaznik;
	int vyslednacena;

public:
	Objednavka(Zakaznik* z);
	void PridatDoObjednavky(Produkt* prod,int howmany);
	void Vypis_Zhrnutie_Objednavky();


};