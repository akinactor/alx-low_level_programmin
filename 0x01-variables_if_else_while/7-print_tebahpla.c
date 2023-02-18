#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Return 0
 */
int main(void)
{
char rvs;

for (rvs = 'z'; rvs >= 'a'; rvs--)
putchar(rvs);

putchar('\n');

return (0);
}
