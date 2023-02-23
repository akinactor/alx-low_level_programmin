#include "main.h"
/**
 * more_numbers - Entry point
 * Return: return void
 */
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int j;
for (j = 0; j <= 14; j++)
{
if (j > 0)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
i++;
}
_putchar('\n');
return;
}
