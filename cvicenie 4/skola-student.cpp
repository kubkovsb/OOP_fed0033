#include <iostream>
#include "School.h"
#include "Student.h"
using namespace std;

int main()
{
	/* CVICENIE 4, vytvoril som ho osobitne, pretože spoloène s cvièenim s Person-školou to môže by metúce
	* I created new class "Student" so unlike 3.task ,students are not insances of "person" class. Login,Name and credits are assigned in constructor
	* škole "vsb" som priradil kapacitu 1,priradil som studentov (bratov) jozka a stanka 
	* to show the functionality and purpose of this program , firsty i show capacity after i both add them to school
	* whenever capacity is reached (NumberOfStudents >= capacity as we can see in School.cpp) , it increases by 1 
	* then i show that we can find student by their ID ( there is also function to find them by name) 
	* then i have added credits to both students , 
	* v instrukciach ste metodu pomenovali NewYear ale popisali ste ju ako metodu ktora pusti studentov cez semester 
	* takže metoda pusti do dalsieho semestra studentov ktory splnaju istu hranicu(15 kreditov)
	* if the number of credits is not enough student is deleted
	* NewYear method is called 3 times so you can see in output screenshot , that "stanko" did not make it to 4th semester and
	* jozko did . NumOfStudents - 1 
	*/
	School* vsb = new School("VSB", 1);
	Student* jozko = new Student("joz0001", "Jozko Beblavy", 20); 
	Student* stanko = new Student("sta0001", "Stanko Beblavy", 25);
    vsb->AddStudent(jozko);
	vsb->AddStudent(stanko);
	vsb->ShowCapacity();
	cout << vsb->NumOfStudents() << endl;
	cout << vsb->FindStudentbyID("sta0001")->GetName()<<endl;
	jozko->AddCredits(50); 
	stanko->AddCredits(10);
	vsb->NewYear();
	vsb->NewYear();
	vsb->NewYear();
	cout << vsb->NumOfStudents() << endl;
	
}

