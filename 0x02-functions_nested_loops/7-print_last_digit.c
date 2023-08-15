#include "main.h"
/**
 * print_last_digit - Prints out the last digit
 * Return: Always 0
 * @n: value input
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
