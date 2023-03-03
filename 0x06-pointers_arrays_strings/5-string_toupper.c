#include "main.h"
/**
 * string_toupper - Entry point
 * @u: char
 * Return: zero
 */


char *string_toupper(char *u)
{
int i = 0;
while (u[i] != '\0')
{
if (u[i] >= 'a' && u[i] <= 'z')
u[i] = u[i] - 32;
i++;
}
return (0);
}
