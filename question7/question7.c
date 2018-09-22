#include <stdio.h>
#include <math.h>
int main()
{
	float x1 = -3;
	int x2 = 6;
	int y1 = 8;
	float y2 = -4;
	float distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));	printf("%f", distance);
	return 0;
}
