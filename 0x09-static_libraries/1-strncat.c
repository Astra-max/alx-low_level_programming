#include "main.h"

/**
 * *_strncat - adds two strings
 * @dest: desyination variable
 * @src: initial var it was stored in
 * @n: int value
 * Return: Destination variable
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
