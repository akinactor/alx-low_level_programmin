#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
i++;
}

}
