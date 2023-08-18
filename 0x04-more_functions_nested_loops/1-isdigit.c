#include "main.h"

/**
 * _isdigit - Prints 1 if true
 * @c: Value printed
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
	{
		return (1);
	}
	return (0);
}
