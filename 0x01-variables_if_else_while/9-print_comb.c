#include <stdio.h>

/**
 * main - code goes here
 *
 * Description: Print all combination of single digits
 *
 * Return: always 0 (success)
 */

int main(void)
{
int n;
for (n = 0; n < 10; n++)
putchar(n);
if (n <= 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
