#include "main.h"

/**
* _strpbrk - Search for string for any of the set of bytes
* @s: string value tested
* @accept: accept string
* Return: s and Null
*/

char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
