#include <iostream>
#include <string>
#include <iomanip>
#include "Person.h"
#include "School.h"
#include "Student.h"
using namespace std;


int Person::CountObjects = 1;
int Student::ObjectCount = 0;        
string Student::database;

int main()
{
// CVICENIE 5
// i am creating instances/objects of "Person" and generating Insurance numbers for them suddenly after with method GetInsuranceNumber()
// method is creating insurance number from date of birth + static CountObjects  which increases everytime Person is created . the final form is RRMMDD/xxxx as stated in your instructions
// Staticka metoda NewDay vynuluje CountObjects , èim sa simuluje ze "narodené" objekty v dalsi den znova zacinaju priradzovat ID od nuly

	Person* stefan = new Person("Stefan", "Vysoky", 22, "12.01.1998", "VYS0001");
	cout << stefan->GetInsuranceNumber() << endl;

	Person* mother = new Person("Zuzka", "Vysoka", 45, "06.01.1975", "VYS0002");
	cout << mother->GetInsuranceNumber() << endl;
	                      
	Person::NewDay();     
	                                       
	Person* father = new Person("Jakub", "Vysoky", 45, "01.01.1975", "VYS0003");       
	cout << father->GetInsuranceNumber() << endl;

	Person* grandmother = new Person("Grand", "Mother", 70, "11.01.1950", "VYS0004");
	cout << grandmother->GetInsuranceNumber() << endl;

	Person* grandfather = new Person("Grand", "Father", 75, "03.01.1945", "VYS0005");
	cout << grandfather->GetInsuranceNumber() << endl;

	cout << "\n------------------------\n";
	Person* stryko = new Person("Stryko", "Ferenc", 90, "03.01.1930", "FER0006");
	Person * pes = new Person("Pes", "Stvornohy", 100, "03.01.1920", "STV0007");
	                                                  // Cvicenie 2
	cout << stefan->GetAge() << endl; // Firstly i show off methods that return values from constructor (name ,surname,age...)
	cout << stefan->GetName() << endl;
	cout << stefan->GetSurname() << endl;
	cout << stefan->GetDateOfBirth() << endl;
	                            // rodinnych clenov som priradil metodami... 
	stefan->Setmatka(mother); // insances of class (stryko, pes..) are in private section , 
	stefan->Setotec(father);  // metoda print vypisuje udaje o jednotlivom clenovy rodiny , print tree udaje vsetkych existujucich , priradenych clenov 
	stefan->Setstaramama(grandmother); // objektu , ktoremu "strom" vytvarame
	stefan->Setstaryotec(grandfather);
	stefan->Setstryko(stryko);
	stefan->Setpes(pes);
	pes->Print(pes);
	stefan->PrintTree();

	cout << "\n------------------------\n";

	School* vsb = new School("VSB", 1);
	vsb->AddStudent(stefan);                                    // Cvicenie 3
	cout << vsb->FindStudenbyID("VYS0001")->GetName() << endl;  // School is created with its name and capacity in constructor 
	vsb->AddStudent(mother);                                    // students are in this case instances of "Person" 
	cout << vsb->FindStudenbyID("VYS0002")->GetName() << endl;  // I have added students "stefan" and "mother"(objects of "Person" who are already created)
	cout << vsb->FindStudenbyName("Vysoky")->GetAge() << endl;  // Students can be found by ID or by their surname 
	vsb->ShowCapacity();                  // FindStudenbyID,FindStudenbyName both return *Person 
	cout << vsb->NumOfStudents() << endl;//  to show functionality ,i output-ed name and age of  returned "students" 
	cout << vsb->IsFull() << endl;  // capacity of school increases whenever another "student" is added (you see, incicial size is 1)
	// method NumOfStudents  conveniently returns number of students in the school , boolean method IsFull return true(1) if capacity is reached
	//  process/methods is/are described in School.cpp
	cout << "-------------------------\n";

	Student* Mikula = new Student("Mikula");
	cout << Mikula->GetLoginGenerator() << endl;
	Student* Makula = new Student("Makula");      // DRUHA CAST CVICENIA 5
	cout << Makula->GetLoginGenerator() << endl;  // Logins are generated from student surnames and number reflecting frequency of first letter precisely as instructed 
	Student* Maceška = new Student("Maceška");    // process/methods is/are described in Student.cpp
	cout << Maceška->GetLoginGenerator() << endl;
	Student* Labuda = new Student("Labuda");
	cout << Labuda->GetLoginGenerator() << endl;
	Student* Lasota = new Student("Lasota");
	cout << Lasota->GetLoginGenerator() << endl;
	Student* Malátová = new Student("Malátová");
	cout << Malátová->GetLoginGenerator() << endl;
	Student* Langerová = new Student("Langerová");
	cout << Langerová->GetLoginGenerator() << endl;
}