#pragma once
#include <string>
#include <iomanip>

using namespace std;

class Student
{
private:
	string login;
	string name;
	string surname;
	string logingenerator;
	

public:
	static string database;     
	static int ObjectCount; 
	int year;
	int credits;
	string Login();
	string GetLoginGenerator();
	Student(string login, string name, int credits);
	Student(string s);
	void SetCredits(int credits);
	int GetCredits();
	void AddCredits(int c);
	string GetLogin();
	string GetName();
	
	
};

