#include "main.h"
#include <string.h>

/**
*_strcat - concantes 2 strings
*@dest: value
*@src: input value
*Return: void
*/

char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while(dest[i] != '0\n')
{
	i++
}
j = 0;
while (src[j] != '\0')
{

	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = "\0";
return (dest);
}
