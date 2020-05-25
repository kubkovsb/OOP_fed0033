#pragma once
#include "Shape.h"

class Circle : public Shape
{


public:
	Circle(int a);
	
	int GetArea();
	int GetPerimeter();

	    // inherits from Shape , getarea and perimiter are here because thier behaviour will be changed 
};


