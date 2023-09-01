#include "main.h"

/**
 * _strcpy - Copies value of pointer to another pointer
 * @dest: For destination
 * @src: Source
 * Return: Destination of newly assigned pointer
 *
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
