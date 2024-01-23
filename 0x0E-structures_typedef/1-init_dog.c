#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to the stuct dog variable to be initialized
 * @name: Pointer to a string containing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the owner's name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
