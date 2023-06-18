#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - A program to print combination of single-digit num  using putchar.
*Return: 0 (success)
*/
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
