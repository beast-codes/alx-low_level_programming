#include <stdio.h>

/**
 * main - code body
 *
 * Details: Print number all single digits in base 10
 *
 * Return: always 0 (success)
 */

int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
