#include "main.h"
/**
 * _strcmp - Entry
 * @s1: first char
 * @s2: second char
 * Return: return is zero
 */


int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[1] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i])
}
i++;
}

return (0);
}
