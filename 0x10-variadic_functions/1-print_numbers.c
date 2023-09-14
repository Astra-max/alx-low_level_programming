#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator ','
 * Return: string
 * @n: number of args to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, arr;

va_list ptr_str;
va_start(ptr_str, n);

for (i = 0; i < n; i++)
{
arr = va_arg(ptr_str, const unsigned int);
printf("%d", arr);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ptr_str);
}
