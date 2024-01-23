#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

/**
 * struct dog - structure representing information about a dog
 * @name: Pointer to a string containing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the owners name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /*DOG_STRUCT_H*/
