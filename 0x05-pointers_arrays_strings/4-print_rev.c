#include "main.h"

/**
 * print_rev - Prints str in reverse
 * @s: string tested
 */

void print_rev(char *s)
{
	int n = 0;
	int p;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (p = 0; p > 0; p--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
