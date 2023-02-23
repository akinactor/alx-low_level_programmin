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
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printd("Buzz");
}

printf(i);

printf('\n');

}
return (0);
}
