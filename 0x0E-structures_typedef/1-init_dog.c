#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function return struct
 * Return: 0
 * struct dog - Describes a dog
 * @name: name of dog
 * @age: Age of the dog
 * @owner: owner
 * @d: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
