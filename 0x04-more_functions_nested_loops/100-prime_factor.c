#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0
 *
 */

int main(void)
{
	long x, maxf;
	
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		maxf = number / x;
	}
	printf("%ld\n", maxf);
	return (0);
}
