#pragma once
#include "Shape.h"

class Point : public Shape
{
public :
	Point();
	int GetArea();
	int GetPerimeter();

	//Inherits from Shape , its just a point so area and perimeters equal to zero


};

