#pragma once
class Triangle
{
public:
	double fieldOfTriangle;

	Triangle();
	Triangle(double height, double base);
	~Triangle();

	void setTriangle(double height, double base);
	void getTriangle();
	double countField();
	Triangle whoIsBigger(Triangle &trojkat1, Triangle &trojkat2);
	static Triangle whoIsTheBiggest(Triangle tabTriangle[], int size);
	//void createTabTriangle ()
	static void sortTriangle(Triangle tabTriangle[], int size);
	

private:
	double heightTriangle;
	double baseTriangle;



};

