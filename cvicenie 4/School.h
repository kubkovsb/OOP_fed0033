#pragma once
#include <string>
#include "Student.h"

using namespace std;

class School
{
private:
	Student** students;
	string id;
	string name;
	int capacity;
	int numberofstudents;

public:
	School(string name, int capacity);                   
	~School();
	void AddStudent(Student* s); // ako argument berie objekt typu student
	Student* FindStudentbyID(string id); 
	Student* FindStudentbyName(string name);
	void ShowCapacity();
	int NumOfStudents();
	bool IsFull();
	void NewYear();


};