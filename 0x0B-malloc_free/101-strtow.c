#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_word - split strings to words
 * @s: string char tested
 * Return: null
 */

int count_word(char *s)
{
int flag, c, w;
flag = 0;
w = 0;

for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 1;
else if (flag == 0)
{
flag = 1;
w++;
}
}
return (w);
}

/**
 * strtow - string to words
 * @str: string char tested
 * Return: null
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int i, start, word, end, k = 0, len = 0, c = 0;

while (*(str + len))
len++;
word = count_word(str);

if (word == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (word + 1));

if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));

if (tmp == NULL)
return (NULL);
while (start < end)
*tmp = '\0';
matrix[k] = tmp - c;
k++;

c = 0;

}
}
else if (c++ == 0)
start = i;
}
matrix[k] = NULL;
return (matrix);
}
