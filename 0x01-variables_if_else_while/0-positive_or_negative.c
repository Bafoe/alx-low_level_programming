#include <stdio.h>
/**
*main - A program to print number + or -.
*Return: 0 (success)
*/
int main(void)
{
int n = 0;
printf("Please input any number : \n");
scanf("%f\n", n);
if (n < 0)
{
printf("is negative\n");
}
else if (n>0)
{
printf("is positive\n");
}
else
{
printf("is zero\n");
}
}
return (0);
