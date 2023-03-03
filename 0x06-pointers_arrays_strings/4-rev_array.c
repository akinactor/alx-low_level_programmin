#include "main.h"
/**
 * reverse_array - Entry point
 * @a: int
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
int b;
int c;

for (b = 0; b < n--; b++)
{
c = a[b];
a[b] = a[n];
a[n] = c;
}

return;

}
