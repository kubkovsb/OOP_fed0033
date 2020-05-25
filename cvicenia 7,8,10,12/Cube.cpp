#include "Cube.h"
#include <math.h>

Cube::Cube(int a) : Square(a)
{
}
int Cube::GetVolume()
{
	return (this->length* this->length* this->length);
}

int Cube::GetArea()                                           // formulas for area and volume
{
	return 6 * (this->length * this->length);
}