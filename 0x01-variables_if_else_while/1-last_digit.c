#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Main- Last digits
 *Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, x);
else if (x == 0)
printf("Last digit of %d is %d and is 0\n", n, x);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
return (0);
}
