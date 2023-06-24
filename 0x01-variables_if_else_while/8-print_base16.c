#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Returns: Always 0
 */

int main(void)
{
int i;
char l6;
for (i = '0'; i <= '9'; i++)
putchar(i);
for (l6 = 'a'; l6 <= 'f'; l6++)
putchar(l6);
putchar('\n');
return (0);
}
