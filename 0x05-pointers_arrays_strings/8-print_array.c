#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array
 * @a : array to print
 * @n : number of elements
 * Return : void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
