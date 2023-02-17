#include <stdio.h>
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
printf("size of a char: ", Sizeof(a));
printf("\n");
printf("size of an int: ", Sizeof(b));
printf("\n");
printf("size of a long int: ", Sizeof(c));
printf("\n");
printf("size of a long long int: ", Sizeof(d));
printf("\n");
printf("size of a float: ", Sizeof(e));
return (0);
}
