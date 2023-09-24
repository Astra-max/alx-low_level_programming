#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - returns list
 * @h: var name
 * Return: 0
*/

size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u]%s\n", h->len, h->str);
h = h->next;
s++;
}
return (0);
}
