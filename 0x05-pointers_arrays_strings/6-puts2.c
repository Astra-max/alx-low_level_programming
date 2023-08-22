#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Returns other strings not all
 * @str: string chars tested
 *
 */

void puts2(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0; i < j; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
