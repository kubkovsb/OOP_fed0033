#pragma once
#include "Zakaznik.h"
class RegistrovanaFirma : public Zakaznik
{
private:
	string meno;

public:
	RegistrovanaFirma(string meno);
};

