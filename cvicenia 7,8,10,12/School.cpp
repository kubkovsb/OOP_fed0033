#include "School.h"
#include <iostream>
#include <stdlib.h>

string printstring(int n)
{
	char letters[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
	'r','s','t','u','v','w','x',  
	'y','z' };
	string ran = "";
	for (int i = 0; i < n; i++)
		ran = ran + letters[rand() % 26];      // function for making random strings , in order to set login for one of addstudent method
	return ran;                             // princip tohto bol nakoniec vytvorenie viacero AddStudent metod a poukazanie na to , ze exituje overloading ktory rozozna o ktoru meodu ide na zaklade parametrov
}

School::School(string name, int capacity)
{
	this->name = name;
	this->capacity = capacity;
	this->numberofstudents = 0;
	this->students = new Student * [capacity];
	this->students2 = new Person * [capacity];
}
School::~School()
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		delete this->students[i];
		delete this->students2[i];  // ako funguje tato metoda na zadavanie studentov som uz popisal v predoslich cviceniach 
	}                                                     
	delete[] this->students;
	delete[] this->students2;
}

void School::AddStudent(Student* s)
{
	this->students[this->numberofstudents] = s;
	this->numberofstudents++;
	if (this->numberofstudents >= this->capacity)
	{
		this->capacity++;
	}
}
void School::AddStudent(Person* p)
{

	this->students2[this->numberofstudents] = p;
	this->numberofstudents++;
	if (this->numberofstudents >= this->capacity)
	{
		this->capacity++;
	}
}
void School::AddStudent(char c1, char c2)
{
	Student* student = new Student(printstring(1) + to_string(c1 + c2), to_string(c1), to_string(c2), rand() % 30);
	this->students[this->numberofstudents] = student; // na zaklade podnetu z parametrov vytvara noveho nahodneho studenta
	this->numberofstudents++;                  // method for random strings is used 
	if (this->numberofstudents >= this->capacity)
	{
		this->capacity++;
	}

}
Student* School::FindStudenbyID(string login)
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		if (this->students[i]->GetLogin() == login)
			return this->students[i];
	}
	return nullptr;

}                                                                                                     
void School::ShowCapacity()
{
	cout << this->capacity << endl;
}
int School::NumOfStudents()
{
	return this->numberofstudents;
}
bool School::IsFull()   // vsetky ostatne su okopirovane z predoslich cviceni ktore som vytvoril , len doplneme o dedenie atributov 
{
	if (this->numberofstudents >= this->capacity)
	{
		return true;
	}
	else {
		return false;
	}

}
