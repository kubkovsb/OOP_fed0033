#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>



Student::Student(string login, string name, int credits)
{
	this->login = login;
	this->name = name;
	this->credits = credits; // year is set to 1 , initializing that student entering school is in first semester
	this->year = 1;
}


string Student::GetLogin()
{
	return this->login;
}

string Student::GetName()
{
	return this->name;
}

void Student::SetCredits(int credits) 
{
	this->credits = credits;
}

int Student::GetCredits()
{
	return this->credits;
}
void Student::AddCredits(int c)
{
	this->credits = this->credits + c; //adds number in parameter...
}
bool  Student::Statnice()
{
	if (this->year == 6) // èo to robi som napisal už v hlavièkovom subore
	{
		return true;
	}
	else return false;
}
int Student::GetYear()
{
	return this->year;
}

