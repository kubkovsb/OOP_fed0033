#include "TriangularPrism.h"

TriangularPrism::TriangularPrism(int length, int width, int c, int HeightOfTriangle,int h) : Triangle(length, width, c, HeightOfTriangle)
{
	this->depth = h;
}

int TriangularPrism::GetArea()
{
	return  (this->length * this->HeightOfTriangle) + (this->length * this->depth)+(this->width * this->depth) + (this->c * this->depth);
}
int TriangularPrism::GetVolume()
{                                                            // formulas for area and volume
	return ((this->length * this->HeightOfTriangle)/2) * this->depth;
}