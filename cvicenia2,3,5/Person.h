#pragma once
#include <string>
#include <iomanip>

using namespace std;
class Person
{
private:
	string name;
	string surname;
	int age;
	string ID;
	string InsNum;
	string dateofbirth;
	Person* matka;
	Person* otec;
	Person* pes;
	Person* staryotec;
	Person* staramama;
	Person* stryko;
public:
	static int CountObjects;                         // all the atributes , constructor ,public methods 
	static void NewDay();
	string InsuranceNumber();
	string GetInsuranceNumber();
	Person(string name, string surname, int age, string dateofbirth, string id);
	void SetSurname(string s);
	string GetSurname();
	void SetDateOfBirth(string d);
	string GetDateOfBirth();
	void SetName(string n);
	string GetName();
	void SetAge(int a);
	int GetAge();
	void PrintTree(Person* m);
	void SetID(string id);
	string GetID();
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

};
