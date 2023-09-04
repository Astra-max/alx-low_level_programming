#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: First string
 * @s2: second string
 * Return: null
 */

char *str_concat(char *s1, char *s2)
{
char *conct;
int i, ci;

if (s1 == NULL)
s2 = "";
if (s2 == NULL)
s2 = "";

i = ci = 0;

while (s1[i] != '\0')
i++;
while (s2[ci] != '\0')
ci++;

conct = malloc(sizeof(char) *(i + ci + 1));

if (conct == NULL)
return (NULL);

i = ci = 0;

while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}
while (s2[ci] != '\0')
{
conct[i] = s2[ci];
i++, ci++;
}

conct[i] = '\0';
return (conct);
}