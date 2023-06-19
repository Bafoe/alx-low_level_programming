#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - A program to prints single base 10 numbers using putchar.
*Return: 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i+'0');
}
putchar('\n');
return (0);
}
