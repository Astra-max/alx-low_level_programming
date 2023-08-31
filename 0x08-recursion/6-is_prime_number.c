#include "main.h"

/**
 * prime_a - returns prime number
 * @a: number tested
 * @b: int
 * Return: 0 and 1
 */

int prime_a(int a, int b)
{

if (a <= 1 || (a != b && a % b == 0))
{
return (0);
}
else if (a == b)
{
return (1);
}
return (prime_a(a, b + 1));
}

/**
 * is_prime_number - Return prime numbers
 * @n: Number tested
 * Return: Recursive funct
 */

int is_prime_number(int n)
{
return (prime_a(n, 2));
}
