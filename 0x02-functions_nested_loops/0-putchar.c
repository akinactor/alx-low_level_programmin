#include "main.h"
/**
 * main - The entry point of puthchar
 * Return: The return value is 0
 */
int main(void)
{
char c[8] = "_putchar";
int a;
for (a = 0; a < 8; a++)
_putchar(c[a]);

_putchar('\n');
return (0);
}
