#pragma once

#include <string>
#include "Person.h"

using namespace std;

class School
{
private:
	Person** students;
	string id;
	string name;
	int capacity;
	int numberofstudents;
	
public:
	School(string name, int capacity);                  // simple atributes , methods , constructor and deconstructor
	~School();
	void AddStudent(Person* p);
	Person* FindStudenbyID(string id);
	Person* FindStudenbyName(string name);
	void ShowCapacity();
	int NumOfStudents();
	bool IsFull();
	
};


