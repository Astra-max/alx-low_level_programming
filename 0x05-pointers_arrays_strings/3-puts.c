#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints string
 * @str: String value tested
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
