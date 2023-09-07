#include <unistd.h>

/**
 * _putchar - output code to console
 * @s: string tested
 * Return: Output
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
