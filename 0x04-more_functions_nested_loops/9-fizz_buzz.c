#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: returns 0
 */
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}

printf("%d", i);

printf(" ");

}
printf("\n");
return (0);
}
