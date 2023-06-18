#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - A program to print base 16 numbers  using putchar.
*Return: 0 (success)
*/
int main(void)
{
char n, i;
for (n = 0; n < 10; n++)
{
putchar(n);
for (i = 'A'; i <= 'F'; i++)
{
putchar(i);
putchar('\n');
}
}
return (0);
}
