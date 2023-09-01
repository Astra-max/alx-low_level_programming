#include "main.h"

/**
 * _atoi - Return converted values
 * Return: 0 and n
 * @s: Tested char
 */

int _atoi(char *s)
{
int sign = 1;
int num = 0;
int i = 0;

while (s[i] == ' ')
{
i++;
}

if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
return (num *sign);
}

