#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
char L24, e, q; 
e = 'e';
q = 'q';
for (L24 = 'a'; L24 <= 'z'; L24++)
if (L24 != e && L24 != q)
putchar(L24);
putchar('\n');
return (0);
}
