#include "main.h"

/**
 * set_bit - set bit - 1
 * @n: number tested
 * @index: indx
 * Return: new bit val
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
