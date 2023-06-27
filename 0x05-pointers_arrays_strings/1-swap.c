#include <stdio.h>

/**
 * main - swaps the values of two integers
 * @a && @b: swap int a to int b, and swap int b to int a.
 * Return: None.
 */

void swap_int(int *a, int *b)
{

int temp = *a;
*a = *b;
*b = temp;
}

