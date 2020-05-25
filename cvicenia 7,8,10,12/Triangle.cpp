#include "Triangle.h"
Triangle::Triangle(int length ,int width, int c, int HeightOfTriangle) : Shape(length, width)
{
	
	this->c = c;
	this->HeightOfTriangle = HeightOfTriangle;
}

int Triangle::GetArea()
{
	return (this->length* this->HeightOfTriangle) /2 ;
}

int Triangle::GetPerimeter()
{
	return this->length + this->width + this->c;                              
}
int Triangle::GetPerimeter_s()
{
	return 3 * this->length;                    // keby islo o rovnostranny trojuholnik
}                                               //   .
  // formulas for area, perimeter and ................