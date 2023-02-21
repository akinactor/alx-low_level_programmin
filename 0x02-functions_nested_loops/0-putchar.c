#include <stdio.h>
#include "main.h"
/**
 * main - The entry point
 * Return: The return value is 0
 */
int main(void)
{
char ab = 'a';
_putchar(ab);

return (0);
}
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
