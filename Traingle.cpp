#include "stdafx.h"
#include "Traingle.h"


Triangle::Triangle()
{	
}

Triangle::Triangle(double height, double base)
{
	if (height > 0 && base > 0) {
		this->setTriangle(height, base);
	}
	this->fieldOfTriangle = this->countField();
}


Triangle::~Triangle()
{
}

void Triangle::setTriangle(double height, double base)
{
	if (height > 0 && base > 0) {
		this->heightTriangle = height;
		this->baseTriangle = base;
	}
	else {
		
	}
}

void Triangle::getTriangle()
{
	std::cout << this->heightTriangle << '\n';
	std::cout << this->baseTriangle << '\n';
}

double Triangle::countField()
{
	return ((this->heightTriangle + this->baseTriangle) / 2);
}

Triangle Triangle::whoIsBigger(Triangle &trojkat1, Triangle &trojkat2)
{
	
	if (trojkat1.fieldOfTriangle > trojkat2.fieldOfTriangle) {
		return trojkat1;
	}
	if (trojkat2.fieldOfTriangle > trojkat2.fieldOfTriangle) {
		return trojkat2;
	}
	else {
		std::cout << "Czyzby rowne? ";
	}
}

Triangle Triangle::whoIsTheBiggest(Triangle tabTriangle[], int size)
{
	sortTriangle(tabTriangle, size);
	std::cout << '\n' << "Pole najwiekszego trojkata: " << tabTriangle[size - 1].fieldOfTriangle << ", o bokach:" << tabTriangle[size - 1].baseTriangle << " i " << tabTriangle[size - 1].heightTriangle;

	return tabTriangle[size - 1];
}

void Triangle::sortTriangle(Triangle tabTriangle[], int size)
{

	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (tabTriangle[j].fieldOfTriangle > tabTriangle[j + 1].fieldOfTriangle)
				std::swap(tabTriangle[j], tabTriangle[j + 1]);
		}
	}
	
	
}
