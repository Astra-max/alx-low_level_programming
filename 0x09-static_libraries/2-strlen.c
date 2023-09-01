#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: Character tested
 * Return: n
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
