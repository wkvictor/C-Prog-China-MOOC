#include "acllib.h"
#include <stdio.h>

int Setup()
{
	initWindow("Test", DEFAULT, DEFAULT, 800, 600);
	
	beginPaint();
	
	line(10,10,100,100);
	
	endPaint();
	
	return 0;
}
