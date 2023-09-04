#include <unistd.h>
#include "main.h"

/**
 * _putchar - output program
 * @c: string char out
 * Return: out
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
