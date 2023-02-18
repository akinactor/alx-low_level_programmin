#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program will print both lower
 *and upper case alphabet
 * Return: The returned value is 0
 */
int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
putchar(alph);

for (alph = 'A'; alph <= 'Z'; alph++)
putchar(alph);

putchar('\n');

return (0);
}
