#include <stdlib.h>
#include <math.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: return 0
 */
int main(void)
{

long w;
long maxi;
long number = 612852475143;
double square = sqrt(number);
for (w = 1; w <= square; w++)
{
if (number % w == 0)
	{
	maxi = number / w;
	}
}
printf("%ld\n", maxi);
return (0);
}
