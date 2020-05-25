#pragma once
#include <string>
using namespace std;
class Produkt
{

public : 
	Produkt(string s, int c);
	string GetNazov();
	int GetCenu();
	string nazov;
	int cena;


};

