#include "main.h"
/**
 * leet - entry
 * @k: char
 * Return: return k
 */



char *leet(char *k)
{
int i;
int j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; k[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (k[i] == s1[j])
{
k[i] = s2[j];
}
}
}

return (k);
}
