#include <stdio.h>
#define PI 3.1415
int main ()
{
	int radius = 6371;
	float surfaceA = 4 * PI * radius * radius;
	printf("%f", surfaceA);
	return 0;
}
