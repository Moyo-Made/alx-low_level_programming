#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing information about a dog
 * @name: Pointer to a string containing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the owner's name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct  dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
