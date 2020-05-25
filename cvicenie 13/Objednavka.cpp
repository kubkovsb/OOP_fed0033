#include "Objednavka.h"
#include <iostream>
using namespace std;
Objednavka::Objednavka(Zakaznik* z)
{
	this->velkost = 100;
	this->p = new Produkt * [velkost];
	this->pocetpoloziek = 0;
	this->zakaznik = z;
	this->vyslednacena = 0;

}
void Objednavka::PridatDoObjednavky(Produkt* prod,int howmany)
{
	for (int i = 0; i < howmany; i++)
	{
		this->p[this->pocetpoloziek] = prod;  // nie ako x nasobok nejakeho produktu ale ten isty produkt sa do pola vlozi "howmany" krat
		this->pocetpoloziek++;
		
	}

}
void Objednavka::Vypis_Zhrnutie_Objednavky()
{
	
	cout << "\n      Zhrnutie Objednavky" << endl;
	cout << "Zakaznik     " << this->zakaznik->meno << endl;
	for (int i = 0; i < this->pocetpoloziek; i++)
	{
		cout <<"Polozka   ->   " << this->p[i]->GetNazov() << " ---------------------- " <<"Cena  ->    " <<this->p[i]->GetCenu() << endl;
		this->vyslednacena = this->vyslednacena + this->p[i]->cena;  // adds to prize
	}
	cout << " \n Vysledna cena je   " << this->vyslednacena << "   eur"<<endl;
}