#pragma once
#include "Triangle.h"
#include "ThirdDimension.h"

class TriangularPrism : public Triangle,public ThirdDimension
{
private:
	int height;
public:
	TriangularPrism(int a, int b, int c, int v,int h);
	int GetArea();
	int GetVolume();
	// inherits from triangle and ThirdDimension ,behaviour of GetArea changed , new method GetVolume
};

