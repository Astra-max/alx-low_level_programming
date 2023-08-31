#include "main.h"
/**
 * factorial - returns factorials
 * @n: interger to be factored
 * Return: 1 if true
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
