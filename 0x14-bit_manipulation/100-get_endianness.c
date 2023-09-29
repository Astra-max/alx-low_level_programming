 #include "main.h"

/**
 * get_endianness - get endian
 * Returns int but takes nothing
 * Return: c
 */

int get_endianness(void)
{
unsigned int me = 1;
char *c = (char *) &me;
return (*c);
}
