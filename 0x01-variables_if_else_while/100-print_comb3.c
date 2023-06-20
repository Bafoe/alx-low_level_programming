#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Entry point.
*Return: 0 (success)
*/
int main(void)
{
int d, c;
for (d = '0'; d <= '9'; d++)
{
	for (c = '0'; c <= '9'; c++)
	{
	putchar(d);
	putchar(c);
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
