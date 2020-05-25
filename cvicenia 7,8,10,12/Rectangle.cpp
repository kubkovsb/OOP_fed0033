#include "Rectangle.h"

Rectangle::Rectangle(int length, int width) : Shape(length,width)
{

}
int Rectangle::GetArea()
{
	return (this->length * this->width);
}
                                            //formulas for area and perimeter
int Rectangle::GetPerimeter()
{
	return 2 * (this->length + this->width);
}
