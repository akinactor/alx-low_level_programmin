#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
int dig;

for (dig = 0; dig < 10; dig++)
putchar((dig % 10) + '0');

putchar('\n');

return (0);
}
