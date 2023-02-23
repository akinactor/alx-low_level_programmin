#include "main.h"
/**
 * print_last_digit - entry point
 * @l: the integer
 * Return: The last digit
 */
int print_last_digit(int l)
{
int w;
w = l % 10;
_putchar(w);
return (w);
}
