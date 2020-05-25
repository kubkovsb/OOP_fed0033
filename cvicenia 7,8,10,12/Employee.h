#pragma once
#include <string>
#include <iomanip>
#include "Person.h"

using namespace std;

class Employee : public Person
{
private:
	int sallary;

public:

	Employee(string name, string surname, int age,string dateofbirth,int sallary);
	
	void SetSallary(int s);
	int GetSallary();

	//inherits from Person , has new methods : SetSallary,GetSallary
		

};
