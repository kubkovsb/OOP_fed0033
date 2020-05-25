#pragma once
#include "Zakaznik.h"
class NeregistrovanyUzivatel : public Zakaznik
{
private :
	string meno;

public :
	NeregistrovanyUzivatel(string meno);
};

