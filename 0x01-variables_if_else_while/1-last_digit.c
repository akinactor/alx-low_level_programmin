#include <stdio.h>
#include <time.h>
/* more headers goes there */
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main - Printing and comparing last digit
 * Return: the returned value is 0
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);

	}
	return (0);
}
