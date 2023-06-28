#include <stdio.h>

/**
*_strlen - returns the length of a string.
* @strlen: striing length
* Return: length of @strlen
*/
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
