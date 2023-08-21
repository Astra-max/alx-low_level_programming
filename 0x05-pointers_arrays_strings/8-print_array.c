#include "main.h"
#include <stdio.h>

/**
 * print_array - Returns arrays
 * @a: Is a pointer
 * @n: is the value tested
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
