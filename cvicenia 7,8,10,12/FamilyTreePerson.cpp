#include "FamilyTreePerson.h"

FamilyTreePerson::FamilyTreePerson(string name, string surname, int age, string dateofbirth) : Person(name, surname, age, dateofbirth, id) // member initilizers 
{
	
	this->pes = nullptr;
	this->matka = nullptr;
	this->otec = nullptr;
	this->staryotec = nullptr;
	this->staramama = nullptr;  // insanciam je priradeny nullptr teda zatial "niè"
	this->stryko = nullptr;
}



Person* FamilyTreePerson::Getmatka()
{
	return this->matka;
}
Person* FamilyTreePerson::Getotec()
{
	return this->otec;
}
Person* FamilyTreePerson::Getpes()
{
	return this->pes;
}
Person* FamilyTreePerson::Getstryko()
{
	return this->stryko;
}
Person* FamilyTreePerson::Getstaramama()
{
	return this->staramama;
}
Person* FamilyTreePerson::Getstaryotec()  // Gets/sets to assign family members to specific Person
{
	return this->staryotec;
}
void FamilyTreePerson::Setmatka(Person* m)
{
	this->matka = m;
}
void FamilyTreePerson::Setotec(Person* o)
{
	this->otec = o;
}
void  FamilyTreePerson::Setpes(Person* p)
{
	this->pes = p;
}
void  FamilyTreePerson ::Setstryko(Person* str)
{
	this->stryko = str;
}
void  FamilyTreePerson::Setstaramama(Person* stm)
{
	this->staramama = stm;
}
void FamilyTreePerson::Setstaryotec(Person* sto)
{
	this->staryotec = sto;
}
void FamilyTreePerson::Print(Person* p)
{
	cout << p->GetName() << " " << p->GetSurname() << " " << p->GetAge() << " " << p->GetDateOfBirth() << endl;
}
void FamilyTreePerson::PrintTree()   // ako som napisal skor , print vypisuje len urciteho clena , printtree vsetkych urcitej osobe priradenych clenov
{
	cout << "Toto je rodinny strom osoby ktorej sme rodinnych clenov priradili" << endl;
	cout << this->matka->GetName() << " " << this->matka->GetSurname() << " " << this->matka->GetAge() << " " << this->matka->GetDateOfBirth() << endl;
	cout << this->otec->GetName() << " " << this->otec->GetSurname() << " " << this->otec->GetAge() << " " << this->otec->GetDateOfBirth() << endl;
	cout << this->staramama->GetName() << " " << this->staramama->GetSurname() << " " << this->staramama->GetAge() << " " << this->staramama->GetDateOfBirth() << endl;
	cout << this->staryotec->GetName() << " " << this->staryotec->GetSurname() << " " << this->staryotec->GetAge() << " " << this->staryotec->GetDateOfBirth() << endl;
	cout << this->stryko->GetName() << " " << this->stryko->GetSurname() << " " << this->stryko->GetAge() << " " << this->stryko->GetDateOfBirth() << endl;
	cout << this->pes->GetName() << " " << this->pes->GetSurname() << " " << this->pes->GetAge() << " " << this->pes->GetDateOfBirth() << endl;
}