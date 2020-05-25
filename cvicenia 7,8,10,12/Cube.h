#pragma once
#include "Square.h"
#include "ThirdDimension.h"

class Cube : public Square,public ThirdDimension
{
public :
	Cube(int a);
	int GetArea();
	int GetVolume();
	// inherits from Square (that inherits from Shape) and from ThirdDimension  methods prototyped for change of their behaviour
};

