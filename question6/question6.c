#include <stdio.h>
#define PI 3.1415
int main()
{
	int height = 6;
	float radius = 2.5;
	float area = (2 * PI * radius * radius) + (2 * PI * radius * height);
	printf("%f", area);
	return 0;
}
