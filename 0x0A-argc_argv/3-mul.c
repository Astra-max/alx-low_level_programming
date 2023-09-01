#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: char convetred
 * Return: n and 0
 */

int _atoi(char *s)
{
int i, d, n, len, f, digit;

i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len ++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[1] - '0';
if (d % 2)
digit =- digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;

f = 0;

}
i++;
}
if (f == 0)
return (0);
return (n);
}
/**
 * main - multiplies arg passed
 * Return: -1 if args < 1
 * @argv: Pointer array that holds args passed
 * @argc: Number of arguments passed
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int multply, iterator;

for (iterator = 0; iterator < argc; iterator++)
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
int number1 = _atoi(argv[1]);
int number2 = _atoi(argv[2]);

multply = number1 * number2;
printf("%d\n", multply);
break;
}
}
return (0);
}
