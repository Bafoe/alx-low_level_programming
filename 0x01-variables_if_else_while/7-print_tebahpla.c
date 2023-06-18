#include <stdio.h>

/**
*main - A program to prints alphbets from z to a using putchar.
*Return: 0 (success)
*/
int main(void)
{
char i;
for (i = 'z'; i = 'a'; i--)
{
putchar(i);
putchar('\n')
}
return (0);
}
