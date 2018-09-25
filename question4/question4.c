#include <stdio.h>
/* Prints the conversion of a given Kelvin to Fahrenheit */
int main()
{
	int Kelvin = 350;
	int Fahrenheit;
	Fahrenheit = 1.8 * (Kelvin - 273) + 32;
	printf("%d\n", Fahrenheit);
	return 0;
}
