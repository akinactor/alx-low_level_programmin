#include "main.h"
/**
 * _strcpy - entry point
 * @dest: at dest
 * @src: at src
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
len++;


}
*(dest + len) = '\0';
return (dest);



}
