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
		putchar(*str++);
	}
	putchar('\n');
}
