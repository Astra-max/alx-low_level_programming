#include "main.h"

/**
 * reverse_array - Reverses arrays contents
 * @a: value
 * @n: Value
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
