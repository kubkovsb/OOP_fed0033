#include "School.h"
#include "Person.h"

#include <iostream>

School::School(string n, int c)
{
	this->name = n;
	this->capacity = c;
	this->numberofstudents = 0;
	this->students = new Person * [capacity];
	
	    // skupinu studentov v podstate vnima ako array osob
}
School::~School()
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		delete this->students[i];
		     // deleting students,freeing memory
	}
	delete[] this->students;
	
}
void School::AddStudent(Person* p)
{
	this->students[this->numberofstudents] = p;
	this->numberofstudents++;
	if (this->numberofstudents >= this->capacity) // students is assign at next avaible place , number ofstudents increased right after
	{
		this->capacity++;   // the capacity does not matter because its basically limitless , whenever its reached , it increases
	}                     
}

Person* School::FindStudenbyID(string id)
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		if (this->students[i]->GetID() == id)
			return this->students[i];
	}
	return nullptr;


}
Person* School::FindStudenbyName(string name)
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		if (this->students[i]->GetSurname() == name) // metody prechadzaju studentov pomocou cyklu a kedykolvek je zhoda medzi parametrom a ID/SURNAME
			                                            // vracia studenta pri ktorom k tomu doslo 
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
bool School::IsFull()
{
	if (this->numberofstudents >= this->capacity)
	{
		return true;
	}
	else {
		return false;
	}

}



