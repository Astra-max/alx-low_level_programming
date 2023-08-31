#include "main.h"
/**
 * sqrt_a - returns natural sqrt of numbers
 * @a: an int
 * @b: an int
 * Return: 0 Always
 */

int sqrt_a(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > 4)
{
return (-1);
}
return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - retirns sqrt of a number
 * @m: number tested
 * Return: sqrt_a()
 */

int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
