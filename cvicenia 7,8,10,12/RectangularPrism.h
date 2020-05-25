#pragma once
#include "Rectangle.h"
#include "ThirdDimension.h"

class RectangularPrism : public Rectangle,public ThirdDimension
{
private : 
	int height;

public :
	RectangularPrism(int a, int b, int c);
	int GetArea();
	int GetVolume();

	//inherits from Rectangle and ThirdDimension , changed behaviour of getarea , new method GetVolume

};

