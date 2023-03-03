#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: string
 * @src: string
 * @n: int
 * Return: the return is char dest
 */




char *_strncpy(char *dest, char *src, int n)
{

int a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
