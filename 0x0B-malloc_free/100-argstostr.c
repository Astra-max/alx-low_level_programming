#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concat args spplied to the program
 * @ac: int
 * @av: char
 * Return: null
 */

char *argstostr(int ac, char **av)
{
int n, r = 0, i = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
i++;
}

i += ac;
str = malloc(sizeof(char) * i + 1);
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
str[r] = av[i][n];
r++;
}

if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
