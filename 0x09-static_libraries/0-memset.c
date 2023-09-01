#include "main.h"

/**
 * _memset - Fills the memory
 * @s: char tested
 * @b: interger
 * @n: unsgned integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
