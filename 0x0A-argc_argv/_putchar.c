#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - Alternative to printf
 * Return: output
 * @c: String char accepted
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
