#include "main.h"
#include <string.h>

/**
 * rev_string - Prints out string value in reverse
 * @s: String char tested
 */

void rev_string(char *s)
{
	int i, j;

	i = strlen(s) - 1;

	j = 0;

	while (i > j)
	{
		char hold = s[i];
		s[i] = s[j];
		s[j] = hold;
		i--;
		j++;

	}
}
