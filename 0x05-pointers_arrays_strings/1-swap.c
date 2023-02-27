#include "main.h"
/**
 * swap_int - entry point
 * @a: first int
 * @b: second int
 * return: the return value is void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
return;
}
