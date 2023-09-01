#include "main.h"

/**
 * *_strncpy - copies to another dest
 * @dest: destination var
 * @src: source var
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
