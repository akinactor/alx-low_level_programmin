#include "main.h"
/**
 * print_line - The entry point of the function
 * @n: the integer that represents number of lines
 * Return: there is no return value for void
 */
void print_line(int n)
{


int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}

return;
}
