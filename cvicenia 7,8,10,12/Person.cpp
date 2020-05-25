#include "Person.h"

Person::Person(string n, string s, int a, string d, string id)
{
	this->name = n;
	this->age = a;
	this->surname = s;
	this->dateofbirth = d;
	this->ID = id;


}
Person::Person(string s)
{
	this->surname = s;
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

int Person::GetAge()                     // base class, base methods for name,age,surname...
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
void Person::SetID(string id)
{
	this->ID = id;

}
string Person::GetID()
{
	return this->ID;
}