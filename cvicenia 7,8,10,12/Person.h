#pragma once
#include <string>
#include <iostream>


using namespace std;


class Person
{
private:
	string ID;
protected:
	string name;
	string surname;
	int age;
	string dateofbirth;
	string id;
	Person* matka;
	Person* otec;
	Person* pes;
	Person* staryotec;
	Person* staramama;
	Person* stryko;
	
	

public:
	Person(string name, string surname, int age, string dateofbirth, string id);
	Person(string surname);
	void SetName(string n);
	string GetName();
	void SetAge(int a);
	int GetAge();
	void SetSurname(string s);
	string GetSurname();
	void SetDateOfBirth(string d);
	string GetDateOfBirth();
	void SetID(string id);
	string GetID();
	static int ObjectCount;
	static int CountObjects;
	                         //base Person class, with protected members , static methods and variables
};

