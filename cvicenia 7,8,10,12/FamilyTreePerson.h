#pragma once
#include "Person.h"
class FamilyTreePerson : public Person
{

public:
	FamilyTreePerson(string name, string surname, int age, string dateofbirth);
	Person* Getmatka();
	Person* Getotec();
	Person* Getstaryotec();
	Person* Getstaramama();
	Person* Getpes();
	Person* Getstryko();
	void Setmatka(Person* m);
	void Setotec(Person* o);
	void Setstaryotec(Person* so);
	void Setstaramama(Person* sm);
	void Setpes(Person* pes);
	void Setstryko(Person* stryko);
	void Print(Person* p);
	void PrintTree();

	//inherits basic informations from Person , here are methods for FamilyTree

};

