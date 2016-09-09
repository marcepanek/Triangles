// triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Traingle.h"

int main()
{
	Triangle trojkacik1(1, 3);
	Triangle  trojkacik2(22, 1);
	Triangle trojkacik3(22, 1);

	int tabSize = 3;
	Triangle * tabTriangle = new Triangle[tabSize];
	tabTriangle[0] = trojkacik1;
	tabTriangle[1] = trojkacik2;
	tabTriangle[2] = trojkacik3;

//	Triangle::sortTriangle(tabTriangle, tabSize);
	Triangle::whoIsTheBiggest(tabTriangle, tabSize);

    return 0;
}

