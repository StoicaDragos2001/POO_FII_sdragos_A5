#include "Canvas.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	Canvas c1(10, 10);
	c1.DrawCircle(5, 5, 2, 'O');
	c1.Print();
	c1.Clear();
	c1.FillCircle(4, 4, 3, '*');
	c1.Print();
	c1.Clear();
	c1.DrawLine(1, 2, 4, 5, '$');
	c1.Print();
	c1.Clear();
	c1.DrawRect(1, 2, 4, 5, '@');
	c1.Print();
	c1.Clear();
	c1.FillRect(4, 4, 7, 7, 'H');
	c1.Print();
	c1.Clear();
	c1.FillRect(4, 4, 7, 7, 'H');
	c1.SetPoint(4, 7, 'Q');
	c1.Print();
	c1.Clear();
}