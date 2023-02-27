#include "main.h"
/**
 * reset_to_98 - Entry point of the function
 * @n: the integer parameter
 * Return: the return value is void
 */
void reset_to_98(int *n)
{
int k  = 98;

n = &k;

*n = k;
n = 98;

return;

}
