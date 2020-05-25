#pragma once
#include "Shape.h"

class Triangle : public Shape
{
protected:         

	int c;
    int HeightOfTriangle;    // vyska na stranu a 

public:
	Triangle(int length,int width,int c, int HeightOfTriangle);
	
	int GetArea();
	int GetPerimeter();
	int GetPerimeter_s();                                      //<----- perimeter of   equilateral triangle
	//inherits from shape ,behaviour of methods changed and 
};

