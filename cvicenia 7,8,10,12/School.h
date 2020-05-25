#pragma once

#include <string>
#include "Person.h"
#include "Student.h"


using namespace std;

class School
{
private:

	Student** students;
	Person** students2;
	string id;
	string name;
	int capacity;
	int numberofstudents;
	char a;


public:
	School(string name, int capacity);
	~School();
	void AddStudent(Student* s);
	void AddStudent(Person* p);
	void AddStudent(char c1, char c2);
	Student* FindStudenbyID(string login);
	Student* FindStudentbyName(string name);
	void ShowCapacity();
	int NumOfStudents();
	bool IsFull();
	

	             //School class with multiple AddStudent methods , and methods that can be found in previous exercises

};