#include <iostream>
#include <string>
#include "Person.h"
#include <iomanip>

Person::Person(string n, string s, int a, string d, string id)
{
	this->name = n;
	this->age = a;
	this->surname = s;
	this->dateofbirth = d;
	this->pes = nullptr;
	this->matka = nullptr;
	this->otec = nullptr;
	this->staryotec = nullptr;
	this->staramama = nullptr;  // insanciam je priradeny nullptr teda zatial "niè"
	this->stryko = nullptr;
	this->ID = id;
	this->InsNum = this->InsuranceNumber(); // ukazuje na metodu nizsie , ktora vytvara insurance number


	CountObjects++; // static variable crucial for making of insurance number 
}

void Person::NewDay()
{
	Person::CountObjects = 1; // metoda simuluje novy den pre udelovanie insurance numbers
}

string Person::InsuranceNumber()
{
	string id1;
	string id2;

	string a = this->dateofbirth; 
	// form  we want is RRMMDD/xxxx  wher xxxx are simulates number of insurance numbers given that day 
	// after methods is called , CountObjects is again equal to 1 ,whenever new object is created , it increases 
	for (int i = 0; i <= a.length(); i++) 
	{
		if (a[i] == '.')
		{
			a.erase(a.begin() + i);    
		}
	}
	a.erase(4, 2);
	reverse(a.begin(), a.end()); // string metody hladaju bodku , èo znamena ze sme z roka presli na mesiac atd... 
	swap(a[0], a[1]);   // potrebujeme dvojcislie rokov dostat na zaciatok , dalej dvojcislie mesiacov a dni
	swap(a[2], a[3]);
	swap(a[4], a[5]);
	id1 = a;

	id2 = std::string(3, '0').append(to_string(CountObjects));
	string id = id1 + "/" + id2;  // v konecnom dosledku id1 = takto zoradene dvojcislia a id2 rovnako ako pri logine v inom cviceni
	return id;                                                       // ukazuje na nulky dosadene az kym sa nedojde ku CountObjects , medzi tieto stringy je len vsunuta /
}
string Person::GetInsuranceNumber()
{
	return this->InsNum;
}

void Person::SetSurname(string s)
{
	this->surname = s;
}
string Person::GetSurname()
{
	return this->surname;
}

void Person::SetName(string n)
{
	this->name = n;
}

string Person::GetName()
{
	return this->name;
}

void Person::SetAge(int a)
{
	this->age = a;
}

int Person::GetAge()
{                                            
	return this->age;
}
void Person::SetDateOfBirth(string d)
{
	this->dateofbirth = d;
}
string Person::GetDateOfBirth()
{
	return this->dateofbirth;
}
Person* Person::Getmatka()
{
	return this->matka;
}
Person* Person::Getotec()
{
	return this->otec;
}
Person* Person::Getpes()
{
	return this->pes;
}
Person* Person::Getstryko()
{
	return this->stryko;
}
Person* Person::Getstaramama()
{
	return this->staramama;
}
Person* Person::Getstaryotec()  // Gets/sets to assign family members to specific Person
{
	return this->staryotec;
}
void Person::Setmatka(Person* m)
{
	this->matka = m;
}
void  Person::Setotec(Person* o)
{
	this->otec = o;
}
void  Person::Setpes(Person* p)
{
	this->pes = p;
}
void  Person::Setstryko(Person* str)
{
	this->stryko = str ;
}
void  Person::Setstaramama(Person* stm)
{
	this->staramama = stm;
}
void Person::Setstaryotec(Person* sto)
{
	this->staryotec = sto;
}
void Person::Print(Person* p)
{
	cout <<  p->GetName() << " " << p->GetSurname() << " " << p->GetAge() << " " << p->GetDateOfBirth() << endl;
}
void Person::PrintTree()   // ako som napisal skor , print vypisuje len urciteho clena , printtree vsetkych urcitej osobe priradenych clenov
{
	cout << "Toto je rodinny strom osoby ktorej sme rodinnych clenov priradili" << endl;
	cout << this->matka->GetName() << " " << this->matka->GetSurname() << " " << this->matka->GetAge() << " " << this->matka->GetDateOfBirth() << endl;
	cout << this->otec->GetName() << " " << this->otec->GetSurname() << " " << this->otec->GetAge() << " " << this->otec->GetDateOfBirth() << endl;
	cout << this->staramama->GetName() << " " << this->staramama->GetSurname() << " " << this->staramama->GetAge() << " " << this->staramama->GetDateOfBirth() << endl;
	cout << this->staryotec->GetName() << " " << this->staryotec->GetSurname() << " " << this->staryotec->GetAge() << " " << this->staryotec->GetDateOfBirth() << endl;
	cout << this->stryko->GetName() << " " << this->stryko->GetSurname() << " " << this->stryko ->GetAge() << " " << this->stryko->GetDateOfBirth() << endl;
	cout << this->pes->GetName() << " " << this->pes->GetSurname() << " " << this->pes->GetAge() << " " << this->pes->GetDateOfBirth() << endl;
}
void Person::SetID(string id)
{
	this->ID = id;

}
string Person::GetID()
{
	return this->ID;
}
