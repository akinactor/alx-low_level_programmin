#include "main.h"
/**
 * puts_half - entry point
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int leng = 0;

while (*str != '\0')
{
leng++;
str++;


}
str -= (leng / 2);
while (*str != '\0')
{
_putchar(*str);

str++;
}
_putchar('\n');

}
