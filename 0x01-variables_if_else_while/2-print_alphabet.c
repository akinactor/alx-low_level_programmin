#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program to write alphabet
 * Return: The return value is 0
 */
int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}
