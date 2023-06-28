#include "main.h"
#include <stdio.h>

/**
 * puts - Prints the string
 * @str: string being printed
 * Return: @str
 */

void puts(char *str)
{
while (*str != '\0'; str++)
_putchar(*str);
_putchar('\n');
}
