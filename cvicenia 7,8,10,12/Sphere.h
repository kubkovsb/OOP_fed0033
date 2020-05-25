#pragma once
#include "Circle.h"
#include "ThirdDimension.h"

class Sphere : public Circle,public ThirdDimension
{
public :
	Sphere(int a);
    int GetArea();
	int GetVolume();

};  // Inherits from Circle and ThirdDimension , behaviour of GetArea changed , new method GetVolume

