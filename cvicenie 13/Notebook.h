#pragma once
#include "Produkt.h"


class Notebook : public Produkt
{
private :
		string nazov;
	     int cena;
public :
	Notebook(string n,int c);
};

