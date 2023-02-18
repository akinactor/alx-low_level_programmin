#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 will be returned
 */
int main(void)
{
char bet;

for (bet = 'a'; bet <= 'z'; bet++)
{
if (bet != 'e' && bet != 'q')
putchar(bet);
putchar('\n');
}
return (0);
}
