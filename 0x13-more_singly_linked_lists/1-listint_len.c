#include "lists.h"

/**
 * listint_len - returns no of items in list
 * @h: head
 * Return: no
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}
