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
printf("size of a char: ", (unsigned long)Sizeof(a));
printf("\n");
printf("size of an int: ", (unsigned long)Sizeof(b));
printf("\n");
printf("size of a long int: ", (unsigned long)Sizeof(c));
printf("\n");
printf("size of a long long int: ", (unsigned long)Sizeof(d));
printf("\n");
printf("size of a float: ", (unsigned long)Sizeof(e));
return (0);
}
