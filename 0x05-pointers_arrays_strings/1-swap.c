#include "main.h"

/**
 * swap_int - Swap values 
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
