#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>



Student::Student(string login, string name, int credits)
{
	this->login = login;
	this->name = name;
	this->credits = credits;
	this->year = 0;
}
Student::Student(string s) // we have different constructors for 2 different tasks
{
	this->surname = s;
	database.append(this->surname);
	this->logingenerator = this->Login();

}
string Student::GetLoginGenerator()
{
	return this->logingenerator;
}

string Student::Login()
{// login is made of 3 first letters of surname + special number
	string log1 = this->surname; // surname is assigned to log1
	int counter = 0; 
	for (int i = 0; i <= log1.length(); i++)
	{
		int c = log1[i];
		if (islower(c))
		{
			log1[i] = toupper(c); // cyklus prejde log1 pomocou string fukcii prelozi na velke pismenka 
			
		}
		log1.erase(3, log1.length()); // chceme len prve 3 takze zvysok vymaze
	}
	for (int i = 0; i <= database.length(); i++)
	{
		if (log1[0] == database[i])// v databaze su loginy a ked login s uz existujucim prvym pismenom existuje tak sa zvysi counter
		{          
			counter++;
		}
	}
	string log2;
	int onemore = counter + ObjectCount; 
	log2 = string(3, '0').append(to_string(onemore));// znova vyuzite string funkcie ,dosadzuju sa nulky('0') az kym sa nenarazi na èislo ktore vyjadruje nás counter
	string LOG = log1 + log2;  // pamatajme ze log1 reprezentuje zvacsene prve 3 pismena a log2 reprezentuje 4 cisla 
	return  LOG; // metoda vracia string , je zapojeny objectcounter ktory sa zvacsuje stale ked sa novy objekt vytvori , je inicializovany pred main
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
	this->credits = this->credits + c;
}


