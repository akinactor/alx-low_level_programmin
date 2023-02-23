#include "main.h"
/**
 * print_most_numbers - entry point
 * Return: no return value
 */
void print_most_numbers(void)
{
int numb;
for (numb = 0; numb <= 9; numb++)
{
if (numb != 2 && numb != 4)
_putchar('0' + numb);
}
_putchar('\n');
return;
}
