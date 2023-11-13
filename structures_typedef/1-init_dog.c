#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the dog struct to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a struct dog variable.
 * name, age, and owner. The struct pointed by 'd' must be pre-allocated.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
