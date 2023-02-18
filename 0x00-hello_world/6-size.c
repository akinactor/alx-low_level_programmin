#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints sizes
 * Return: The return value is 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("size of a char : %c\n", Sizeof(a));
printf("size of an int : %d\n", Sizeof(b));
printf("size of a long int : %ld\n", Sizeof(c));
printf("size of a long long int : %ld\n", Sizeof(d));
printf("size of a float : %f\n", Sizeof(e));
return (0);
}
