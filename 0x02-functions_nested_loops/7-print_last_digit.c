#include "main.h"
/**
 * print_last_digit - entry point
 * @l: the integer
 * Return: The last digit
 */
int print_last_digit(int l)
{
int w;
if (l < 0)
l = -l;
w = l % 10;
if (w < 0)
w = -w;
_putchar(w + '0');
return (w);
}
