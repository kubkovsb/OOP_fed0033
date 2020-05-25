#pragma once
#include "Zakaznik.h"
class RegistrovanyUzivatel : public Zakaznik
{
private:
	string meno;

public:
	RegistrovanyUzivatel(string meno);
};

