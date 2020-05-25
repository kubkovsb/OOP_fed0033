#include "Square.h"

Square::Square(int length) : Shape(length,width)
{

}
int Square::GetArea()
{
	return (this->length * this->length);
}
                                          //formulas for area and perimeter
int Square::GetPerimeter()
{
	return 4 * this->length;
}
