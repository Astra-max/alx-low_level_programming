#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates thru the array
 * @array: array
 * @size: size of array
 * @action: func pointer
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}
}
