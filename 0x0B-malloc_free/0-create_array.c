#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - mem loc
 * @size: size to alloc
 * @c: string char
 * Return: Null if error
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
