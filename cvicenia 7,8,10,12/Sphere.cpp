#include "Sphere.h"
#include <math.h>
int get_PI()
{
    double pi;
    __asm
    {
        fldpi                     // function to get ludolf number
        fstp pi
    }
    return pi;
}

Sphere::Sphere(int a) : Circle(a)
{
}
int Sphere::GetArea()
{
	return 4* get_PI() * (this->length*this->length);
}                                                                             // formulas for area and volume
int Sphere::GetVolume()
{
    return (4/3) * get_PI() * (this->length * this->length * this->length);
}