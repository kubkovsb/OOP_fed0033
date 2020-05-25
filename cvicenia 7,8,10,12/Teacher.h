#pragma once
#include <string>
#include "Employee.h"

class Teacher : public Employee
{
private:
    string department;
    string SubjectsTeaching;

public :
    Teacher(string name, string surname, int age, string dateofbirth, int sallary, string department, string SubjectsTeaching);
    void SetDepartment(string department);
    string GetDepartment();
    void SetSubjectsTeaching(string SubjectsTeaching);
    string GetSubjectsTeaching();



      // special case of employee , has its own methods 


};

