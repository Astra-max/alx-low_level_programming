#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory to a program
 * @b: mem multiplier
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
exit(98);
return (p);
}
