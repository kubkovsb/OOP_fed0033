#pragma once
#include <string>
#include <iomanip>
#include "Person.h"

using namespace std;

class Student : public Person
{
private:
	string login;
	
	string logingenerator;
	

public:

	int year; // variables year and credits are public so they are visible for Methods in School class
	int credits;
	void SetCredits(int credits);
	int GetCredits();
	void AddCredits(int c);//i created this method so i can add additional credits to show who passes to next year and who doesnt
	string GetLogin();
	string GetName();
	bool Statnice();// method return true if student is in 6th semester
	int GetYear(); // return current year of current student
	Student(string login, string name,string surname, int credits);
	Student(string s);
	
	static string database;
	static int ObjectCount;
	string Login();
	string GetLoginGenerator();
	

	// Student this time inherits the main personal information from Person 
	
};
