#include <stdio.h>
/**
 * main - prints all alphabet in lowercase backwards
 *
 *Return: Always 0
 */
int main(void)
{
char lc;
for (lc = 'z'; lc >= 'a'; lc--)
putchar(lc);
putchar('\n');
return (0);
}
