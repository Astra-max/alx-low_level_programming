#include "main.h"

/**
 * rev_string - Prints out string value in reverse
 * @s: String char tested
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[counter] = rev;
	}
}
