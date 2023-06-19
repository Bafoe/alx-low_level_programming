#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - A program to print base 16 numbers  using putchar.
*Return: 0 (success)
*/
int main(void)
{
int n;
char i;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
