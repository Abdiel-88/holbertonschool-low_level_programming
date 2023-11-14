#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Allocates memory to create a new dog_t and makes copies of the
 * name and owner strings.
 * will free any previously allocated memory and return NULL.
 *
 * Return: A pointer to the newly created dog_t or NULL if an error occurs.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
if (name != NULL)
{
new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);
}
else
{
new_dog->name = NULL;
}

if (owner != NULL)
{
new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);
}
else
{
new_dog->owner = (NULL);
}

new_dog->age = age;
return (new_dog);
}
