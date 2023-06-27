#include "main.h"


 /**
  * int _strlen - write a function that returns the
  * lenght of a string
  * @s : string
  * Return : lenght
  */

int _strlen(char *s)
{

int length = 0;

while (*s++)
{
length++;
}
return (length);
}
