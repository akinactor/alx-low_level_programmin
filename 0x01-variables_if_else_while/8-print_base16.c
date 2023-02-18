#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program to print hexadecimal in char
 * Return: The return alue is 0
 */
int main(void)
{
int i;
char j;

for (i = 0; i < 10; i++)
putchar((i % 10) + '0');

for (j = 'a'; j <= 'f'; j++)
putchar(j);

putchar('\n');

return (0);
}
