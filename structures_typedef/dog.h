#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a dog's basic info
 * @name: a dog's name
 * @age: a dog's age
 * @owner: a dog's owner
 *
 * Description: This struct is used for storing basic information about a dog,
 * including its name, age, and the owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
