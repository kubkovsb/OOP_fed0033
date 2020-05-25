#include "Employee.h"

Employee::Employee(string name, string surname, int age, string dateofbirth, int sallary) : Person(name, surname, age, dateofbirth, id)
{
	this->sallary = age;
}

void Employee::SetSallary(int s)
{
	this->sallary = s;                    // constructor with member initializers and sallary set/get
}
int Employee::GetSallary()
{
	return this->sallary;
}
