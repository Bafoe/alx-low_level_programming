#include <stdio.h>
/**
*main - A program to print number + or -.
*Return: 0 (success)
*/
int main(void)
{
int n = 0;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n >= 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
