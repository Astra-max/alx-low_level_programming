#include "main.h"

/**
 * print_binary - return bin rep of number
 * @n:  val tested
 * Return: bin
 */

void print_binary(unsigned long int n)
{
int iter, count = 0;
unsigned long int current;

for (iter = 63; iter >= 0; iter--)
{
current = n >> iter;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}

if (!count)
_putchar('0');
}
