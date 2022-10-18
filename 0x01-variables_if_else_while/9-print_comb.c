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
for (n = 58; n < 68; n++)
putchar(n);
if (n != 67)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
