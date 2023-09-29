#include "main.h"

/**
 * binary_to_uint - converts binary no to int
 * @b: Binary char
 * Return: int bit
 */

unsigned int binary_to_uint(const char *b)
{
int iter;
unsigned int val = 0;

if (!b)
return (0);

for (iter = 0; b[iter]; i++)
{
if (b[iter] < '0' || b[iter] > '1')
return (0);
val = 2 * val + (b[iter] - '0');
}
return (val);
}
