#include "Teacher.h"

Teacher::Teacher(string name, string surname, int age, string dateofbirth, int sallary,string department,string SubjectsTeaching) : Employee(name, surname, age, dateofbirth,sallary)
{
	this->department = department;
	this->SubjectsTeaching = SubjectsTeaching;
}
void Teacher::SetDepartment(string department)
{
	this->department = department;
}
string Teacher::GetDepartment()
{
	return this->department;  // Teacher is special case of employee
}                                                                   
void Teacher::SetSubjectsTeaching(string subjectsteaching)
{
	this->SubjectsTeaching = subjectsteaching;
}
string Teacher::GetSubjectsTeaching()
{
	return this->SubjectsTeaching;
}
