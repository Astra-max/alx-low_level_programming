#include "main.h"

/**
 * clear_bit - set bit val - 0
 * @n: numb tested
 * @index: index
 * Return: new bit val
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
