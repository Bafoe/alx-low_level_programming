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
i=0;
while ( i < 10)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
