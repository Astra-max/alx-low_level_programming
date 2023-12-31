#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: ", "
 * @n: number of param passed
 * Return: string
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list ptr;
va_start(ptr, n);

for (i = 0; i < n; i++)
{
str = va_arg(ptr, char*);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
