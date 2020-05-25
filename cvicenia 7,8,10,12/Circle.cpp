#include "Circle.h"
#include <math.h>

int get_pi()
{
    double pi;
    __asm
    {
        fldpi                     // function to get ludolf number
        fstp pi
    }
    return pi;
}

Circle::Circle(int length) : Shape(length,width)
{

}
int Circle::GetArea()
{
    return get_pi() * pow(this->length,2);
}
int Circle::GetPerimeter()
{
    return 2 * get_pi() * this->length;
}