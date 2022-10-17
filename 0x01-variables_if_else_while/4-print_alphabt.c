#include <stdio.h>
/**
 * main - prints all alphabets except e and q
 *
 *Return: Always 0
 */
int main(void)
{
  char lc;
  for (lc = 'a'; lc <= 'z'; lc++)
    putchar(lc);
  if (lc != 'e' && lc != 'q')
    putchar(lc);
  putchar('\n');
  return (0);
}
