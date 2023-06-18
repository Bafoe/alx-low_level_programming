#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - A program to print lower case alphabet.
*Return: 0 (success)
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
putchar('\n');
}
return (0);
}
