#include "main.h"
/**
 * more_numbers - Entry point
 * Return: return void
 */
void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
for (int j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}

}
_putchar('\n');
return;
}
