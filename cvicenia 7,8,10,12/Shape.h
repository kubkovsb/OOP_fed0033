#pragma once
class Shape
{
protected:
	int length;
	int width;

public:
	Shape(int length, int width);
	Shape();
	virtual int GetArea();
	int GetPerimeter();

	// Base Shape class , with main atributes and virtual method - GetArea


};

