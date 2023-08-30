#include "main.h"
#include <unistd.h>
/**
 * _putchar - Standout 
 * @c: string
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
