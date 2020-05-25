#pragma once
#include "Shape.h"
class Rectangle : public Shape
{


public:
	Rectangle(int length,int width);
	int GetArea();
	int GetPerimeter();
	    
	    // inherits from Shape , behaviour of methods changed 

};
