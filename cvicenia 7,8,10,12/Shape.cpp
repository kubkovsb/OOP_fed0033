#include "Shape.h"

Shape::Shape(int length, int width)
{
	this->length = length;
	this->width = width;

}
Shape::Shape()
{

}                        //had to add another shape constructor for sake of collection to be working ,virtual getarea
int Shape::GetArea()
{
	return 0;
}








