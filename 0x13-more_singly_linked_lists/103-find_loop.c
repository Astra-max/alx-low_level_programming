#include "lists.h"

/**
 * free_listint_safe - clears list
 * @h: head node
 * Return: len
 */

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
break;
}
}
*h = NULL;
return (len);
}
