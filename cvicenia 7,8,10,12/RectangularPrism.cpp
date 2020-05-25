#include "RectangularPrism.h"

RectangularPrism::RectangularPrism(int length, int width, int c) : Rectangle(length, width) 
{
	this->depth= c;
}
int RectangularPrism::GetArea()
{
	return 2 * (this->length * this->width + this->length * this->depth + this->width * this->depth);
}

int RectangularPrism::GetVolume()                  // formulas for area and volume 
{
	return (this->length * this->width * this->depth);
}