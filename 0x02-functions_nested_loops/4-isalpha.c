#include "main.h"
/**
 * _isalpha - Values printed out if there is lower alphar char
 * @c: A value
 * Return: Returns 1 when true
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
