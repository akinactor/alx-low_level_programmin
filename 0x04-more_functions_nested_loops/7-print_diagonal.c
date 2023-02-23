#include "main.h"
/**
 * print_diagonal - entry point
 * @n: the number of times
 * Return: the returned value is void
 */
void print_diagonal(int n)
{
int a;
int b;
if (n <= 0)
{

_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(32);
	}
_putchar('\\');
_putchar('\n');
}
}
return;
}
