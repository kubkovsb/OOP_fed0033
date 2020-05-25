#include <iostream>
#include <string>
#include "Point.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "FamilyTreePerson.h"
#include "Person.h"
#include "School.h"
#include "Student.h"
#include "Employee.h"
#include "Teacher.h"
#include "RectangularPrism.h"
#include "Cube.h"
#include "Sphere.h"
#include "TriangularPrism.h"
#include "Shape.h"



using namespace std;

int Person::CountObjects = 1;
int Student::ObjectCount = 0;
string Student::database;

void sort(Shape* ar[])
{

    int i, j, min;
    Shape* temp;

    for (i = 0; i < 4; i++) {
        min = i;
        for (j = i + 1; j < 5; j++)
            if (ar[j]->GetArea() < ar[min]->GetArea())
                min = j;
        temp = ar[i];
        ar[i] = ar[min];
        ar[min] = temp;
    }
}
                                         // both are rebuilded selectionsort functions to work with shape/Thirddimension
void sort(ThirdDimension * ar[])        

    {

        int i, j, min;
        ThirdDimension* temp;

        for (i = 0; i < 3; i++) {
            min = i;
            for (j = i + 1; j < 4; j++)
                if (ar[j]->GetVolume() < ar[min]->GetVolume())
                    min = j;
            temp = ar[i];
            ar[i] = ar[min];
            ar[min] = temp;
        }

    }



int main()
{
     // Cvicenie 7 

    Point* p = new Point();
    cout << "Point area: " << p->GetArea() << endl;
    cout << "Point parimeter: " << p->GetPerimeter() << endl;

    Square* s = new Square(5);
    cout << "Square area: " << s->GetArea() << endl;
    cout << "Square parimeter: " << s->GetPerimeter() << endl;

    Rectangle* r = new Rectangle(5, 6);
    cout << "Rectangle area: " << r->GetArea() << endl;
    cout << "Rectangle parimeter: " << r->GetPerimeter() << endl;

    Triangle* t = new Triangle(3, 4, 5, 6);
    cout << "Triangle area: " << t->GetArea() << endl;
    cout << "Triangle parimeter: " << t->GetPerimeter() << endl;

    Circle* c = new Circle(5);
    cout << "Circle area: " << c->GetArea() << endl;
    cout << "Circle parimeter: " << c->GetPerimeter() << "\n\n";
    //i created different shapes , they all inherit main atributes/methods from Shape
    //they all have methods to compute Area and perimeter, results are printed out



    cout << "\n------------------------\n";
    FamilyTreePerson* Jozko = new FamilyTreePerson("Jozko", "Vysoky", 18, "10.4.2002");
    FamilyTreePerson* Zuzka = new FamilyTreePerson("Zuzka", "Vysoka", 45, "1.1.1975");
    FamilyTreePerson* Jakub = new FamilyTreePerson("Jakub", "Vysoky", 45, "1.1.1975");
    FamilyTreePerson* grandmother = new FamilyTreePerson("Grand", "Mother", 70, "1.1.1950");
    FamilyTreePerson* grandfather = new FamilyTreePerson("Grand", "Father", 75, "1.1.1945");
    FamilyTreePerson* stryko = new FamilyTreePerson("Stryko", "Ferenc", 90, "03.01.1930");
    FamilyTreePerson* pes = new FamilyTreePerson("Pes", "Stvornohy", 100, "03.01.1920");

    // metody na vytvorenie stromu boli premiestnene do potomka FamilyTreePerson 
    Jozko->Setmatka(Zuzka); // otherwise same as task 2
    Jozko->Setotec(Jakub);
    Jozko->Setstaramama(grandmother);
    Jozko->Setstaryotec(grandfather);
    Jozko->Setstryko(stryko);
    Jozko->Setpes(pes);
    pes->Print(pes);
    Jozko->PrintTree();

    cout << "\n------------------------\n";




    cout << "\n------------------------\n";
                                              // Cvicenie 8
    Student* student1 = new Student("stu0001", "First", "Student", 10);
    Student* student2 = new Student("stu0002", "Second", "Student", 12);
    School* vsb = new School("VSB", 0);
    vsb->AddStudent(student1);
    cout << vsb->FindStudenbyID("stu0001")->GetName() << endl;
    vsb->AddStudent(student2);
    cout << vsb->FindStudenbyID("stu0002")->GetName() << endl;

    cout << "\n------------------------\n";

    vsb->ShowCapacity();
    cout << vsb->NumOfStudents() << endl;
    cout << vsb->IsFull() << endl;
    cout << "\n------------------------\n";
    Student* jozko = new Student("joz0001", "Jozko", "Beblavy", 20);
    cout << jozko->GetLogin() << endl;
    cout << jozko->GetName() << endl; // hlavna zmena su member initiazers v konstruktori triedy ktorá dedí , kde sa prosto urci ktore atributy sa dedia , ktorie nie , ktore ma potomok naviac...
    cout << jozko->GetCredits() << endl; 
   

    // Student inherits all the possible information that it can from Person ( Age, name...) School takes student as paramater
    cout << "\n------------------------\n";

    Student* Mikula = new Student("Mikula");
    cout << Mikula->GetLoginGenerator() << endl;
    Student* Makula = new Student("Makula");
    cout << Makula->GetLoginGenerator() << endl;
    Student* Maceška = new Student("Maceška");
    cout << Maceška->GetLoginGenerator() << endl;
    Student* Labuda = new Student("Labuda");
    cout << Labuda->GetLoginGenerator() << endl;       // tu sa nič nemeni,generator loginu z cvicenia 5 , je to tu prekopirovane , aby som ukazal, že to stale funguje...
    Student* Lasota = new Student("Lasota");
    cout << Lasota->GetLoginGenerator() << endl;
    Student* Malátová = new Student("Malátová");
    cout << Malátová->GetLoginGenerator() << endl;
    Student* Langerová = new Student("Langerová");
    cout << Langerová->GetLoginGenerator() << endl;


    cout << "\n\n";
    cout << "\n------------------------\n";
    Employee* employee1 = new Employee("Jack", "Rozparovac", 30, "1.1.1990", 1000);
    cout << employee1->GetName() << endl;
    cout << employee1->GetSurname() << endl;
    cout << employee1->GetAge() << endl;
    cout << employee1->GetDateOfBirth() << endl;
    employee1->SetSallary(1500);
    cout << employee1->GetSallary();
    // Employee has a name , surname , age , date of bith,same as all the "Persons"/"Students"  
    // Apart from this , it has also sallary , it can be changed with SetSallary function 

    cout << "\n------------------------\n";
    Teacher* mathteacher = new Teacher("Petr", "Matematicky", 45, "1.1.1975", 1200, "Fakulta Matematiky", "Matematika,Linearna algebra");
    cout << mathteacher->GetName() << endl;
    cout << mathteacher->GetSurname() << endl;
    cout << mathteacher->GetAge() << endl;
    cout << mathteacher->GetDateOfBirth() << endl;
    cout << mathteacher->GetSallary() << endl;
    mathteacher->SetDepartment("Fakulta Fyziky");
    mathteacher->SetSubjectsTeaching("Mimoriadne narocna fyzika");
    cout << mathteacher->GetDepartment() << endl;
    cout << mathteacher->GetSubjectsTeaching() << endl;
    // Teachers are special cases of Employees . MoreOver they have assigned "fakulta" and "subject that they teach", both are in constructor and can be reasigned 

    cout << "\n------------------------\n";

    RectangularPrism* rp = new RectangularPrism(5, 6, 7);
    RectangularPrism* rp2 = new RectangularPrism(8, 9, 10);
    cout << rp->GetArea() << endl;
    cout << rp->GetVolume() << endl;
    Cube* cube = new Cube(5);
    Cube* cube2 = new Cube(3);
    cout << cube->GetArea() << endl;
    cout << cube->GetVolume() << endl;
    Sphere* sphere = new Sphere(8);       // 3D shapes inherit from "Shape" and "ThirdDimension"
    Sphere* sphere2 = new Sphere(6);      // ThirdDimension has virtualmethod GetVolume amd mainly has atribut depth or just simple third dimension
    cout << sphere->GetArea() << endl;    // in cube third dimension is simply just length , etc... priority is perspective for new object that i created
    cout << sphere->GetVolume() << endl;  // Rectangularprism-Rectangle , Cube-Square, TraingularPrism-triangle... 
    TriangularPrism* tp = new TriangularPrism(4, 5, 6, 8, 10);
    TriangularPrism* tp2 = new TriangularPrism(4, 5, 6, 8, 10);// ALL the methods for perimeter,volume,are mathematical formulas ...
    cout << tp->GetArea() << endl;
    cout << tp->GetVolume() << endl;

      // Cvicenie 10,12
    cout << "\n------------------------\n";
    Person* person = new Person("Human", "Being", 100, "1.1.1920", "BEI0000");
    School* school = new School("school", 0);
    school->AddStudent(student1);
    school->AddStudent(person);     // various methods to add student , Student , Person and thirdly inicials 
    school->AddStudent('J', 'F');   // princip je v tom , že C++ vie rozoznat jedno od druheho na zaklade parametrov


 

    Shape* collection[5];
    collection[0] = sphere;
    collection[1] = t;
    collection[2] = cube;
    collection[3] = c;
    collection[4] = s;
    ThirdDimension* VolumeArray[4];    // potomkovia shape/thirdDimension priradeny do pola 
    VolumeArray[0] = sphere2;          // functions above implemented are selection sort function rebuilded to work with classes 
    VolumeArray[1] = rp2;
    VolumeArray[2] = cube2;
    VolumeArray[3] = tp2;

    sort(collection);
    sort(VolumeArray);








}
