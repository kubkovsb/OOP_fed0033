#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>



Student::Student(string login, string name,string surname, int credits) : Person (name,surname,age,dateofbirth,id)
{
	this->login = login;
	this->credits = credits;    // dedi hlavne atributy,chovanie z Person
	this->year = 1;
	
}
Student::Student(string surname) : Person(surname)
{
	this->surname = surname;
	database.append(this->surname);
	this->logingenerator = this->Login();

}
string Student::GetLoginGenerator()
{
	return this->logingenerator;
}

string Student::Login()
{
	string log1 = this->surname;
	int counter = 0;
	for (int i = 0; i <= log1.length(); i++) // postup vytvarania loginu som uz popisal v predchadzajucich cviceniach
	{
		int c = log1[i];
		if (islower(c))
		{
			log1[i] = toupper(c);

		}
		log1.erase(3, log1.length());
	}
	for (int i = 0; i <= database.length(); i++)
	{
		if (log1[0] == database[i])
		{
			counter++;
		}
	}                                               
	string log2;
	int onemore = counter + ObjectCount;
	log2 = string(3, '0').append(to_string(onemore));
	string LOG = log1 + log2;
	return  LOG;
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
	if (this->year == 6) // co to robi som napisal už v hlavickovom subore
	{
		return true;
	}
	else return false;
}
int Student::GetYear()
{
	return this->year;
}
