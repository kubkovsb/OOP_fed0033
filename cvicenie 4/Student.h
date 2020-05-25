#pragma once
#include <string>
#include <iomanip>

using namespace std;

class Student
{
private:
	string login;
	string name;

public:
	int year; // variables year and credits are public so they are visible for Methods in School class
	int credits;
	Student(string login, string name, int credits); // constructor
	void SetCredits(int credits); 
	int GetCredits();
	void AddCredits(int c);//i created this method so i can add additional credits to show who passes to next year and who doesnt
	string GetLogin();
	string GetName();
	bool Statnice();// method return true if student is in 6th semester
	int GetYear(); // return current year of current student

};
