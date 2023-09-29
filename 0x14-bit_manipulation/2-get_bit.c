#include "main.h"

/**
 * get_bit - takes val & Return bits
 * @n: val tested
 * @index: indx
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
int val;

if (index > 63)
return (-1);
val = (n >> index) & 1;
return (val);
}
