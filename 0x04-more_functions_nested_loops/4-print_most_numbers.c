#include "main.h"

/**
 * print_most_numbers - Print numbers
 *
 */

void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		if (y == 2 || y == 5)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
