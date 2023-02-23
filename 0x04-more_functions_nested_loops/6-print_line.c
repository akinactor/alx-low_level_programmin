#include "main.h"
/**
 * print_line - The entry point of the function
 * @n: the integer that represents number of lines
 * Return: there is no return value for void
 */
void print_line(int n)
{
for (n = 0; n < 10; n++)
{
char k = '-';
if (n <= 0)
_putchar('\n');
else
_putchar(k);
}
_putchar('\n');

return;
}
