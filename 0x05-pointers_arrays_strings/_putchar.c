#include "main.h"
#include <unistd.h>

/**
 * _putchar - For other projects
 * @c: Character
 * Return: Always 0
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
