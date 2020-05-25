#include "School.h"
#include <iostream>

School::School(string n, int c)
{
	this->name = n;
	this->capacity = c;
	this->numberofstudents = 0;          // capacity is set in constructor , doesnt really matter , whenever is reached , it automatically increases
	this->students = new Student * [capacity];

}
School::~School()
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		delete this->students[i];
	}
	delete[] this->students;
}
void School::AddStudent(Student* p)
{
	this->students[this->numberofstudents] = p; //
	this->numberofstudents++;
	if (this->numberofstudents >= this->capacity)
	{
		this->capacity++;
	}
	// Adding students& capacity works like array , student in paramater is added and number of students is increased 
	// if Numberofstudents is >=  capacity , the capacity automatically increases 
}
Student* School::FindStudentbyID(string id)
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		if (this->students[i]->GetLogin() == id) // we loop through array of students to find a match of this->students login and string that we added as paramater
			return this->students[i];
	}
	return nullptr;


}
Student* School::FindStudentbyName(string name)
{
	for (int i = 0; i < this->numberofstudents; i++)
	{
		if (this->students[i]->GetName() == name)
			return this->students[i];
	}
	return nullptr;
	// the same as finding by id ,this time finding match of name
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
void School::NewYear()
{// limit pre prejdenie do dalsieho semestra su nasobky 15tky , zalezi od toho v ktorom semestri je student 
	// ked to nieje splneje tak sa vymaze student z "databazy" a zmensi sa pocet studujucich
	// ak student splni podmienku tak sa posuva do dalsieho semestra 
	for (int i = 0; i < this->numberofstudents; i++)
	{
		if (students[i]->credits <= (students[i]->year * 15))
		{
			delete this->students[i];
			this->numberofstudents--;
		}
		else students[i]->year++;
	}

}
