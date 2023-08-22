#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints last string vals
 * @str: tested string
 *
 */

void puts_half(char *str)
{
	int j, len;

	len = strlen(str);
	j = len / 2;

	printf("%s\n", str + j);
}
