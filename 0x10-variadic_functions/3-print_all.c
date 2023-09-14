#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints format specifies
 * @format: format specifier
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
int i, check_status; /* initialisation*/
char *str; /*string char*/
va_list spc; /*list of args passed*/
va_start(spc, format); /*variable argument*/
i = 0; /*initialized i*/

while (format != NULL && format[i] != '\0') /*looping thru*/
{
switch (format[i])
{
case 'i': /*case i*/
printf("%d", va_arg(spc, int));
check_status = 0;
break;
case 'f': /*case f*/
printf("%f", va_arg(spc, double));
check_status = 0;
break; /*end of case3*/
case 'c': /*case c*/
printf("%c", va_arg(spc, int));
check_status = 0;
break;
case 's': /*case s*/
str = va_arg(spc, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default: /*Default*/
check_status = 1;
break;
}
if (format[i + 1] != '\0' && check_status == 0)
printf(", ");
i++;
}
printf("\n");
va_end(spc);
}
