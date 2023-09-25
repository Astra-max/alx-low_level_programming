#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum all data in list
 * @head: first node
 * Return: empty list
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
