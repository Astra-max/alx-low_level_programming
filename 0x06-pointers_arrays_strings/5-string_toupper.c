#include "main.h"

/**
 * *string_toupper - To top
 * @n: string char tested
 * Return: n
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[n] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}