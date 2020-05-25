#pragma once
#include "Shape.h"

class Square : public Shape
{


public:
	Square(int a);
	int GetArea();
	int GetPerimeter();


	// Inherits from Shape , behaviour of methods changed 


};


